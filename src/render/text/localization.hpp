// Traduções gerais da interface — UTF-8
#pragma once
#include <string_view>
#include <utility>
inline constexpr std::pair<std::string_view, std::string_view> traducoes_ptbr[] = {
    {"Visuals", "Visuais"},
    {"Misc", "Diversos"},
    {"Click again to confirm", "Clique novamente para confirmar"},
    {"Hide settings", "Ocultar configurações"},
    {"Reloaded", "Recarregado"},
    {"Link copied", "Link copiado"},
    {"Sandbox", "Ambiente de testes"},
    {"CONFIGS", "CONFIGURAÇÕES"},
    {"LUA SCRIPTS", "SCRIPTS LUA"},
    {"New config", "Nova configuração"},
    {"Save", "Salvar"},
    {"Import", "Importar"},
    {"Open folder", "Abrir pasta"},
    {"Change folder", "Alterar pasta"},
    {"No folder selected", "Nenhuma pasta selecionada"},
    {"Choose folder", "Escolher pasta"},
    {"No configs yet", "Nenhuma configuração ainda"},
    {"No scripts", "Nenhum script"},
    {"Delete", "Excluir"},
    {"Duplicate", "Duplicar"},
    {"Rename", "Renomear"},
    {"Overwrite with current", "Substituir pela atual"},
    {"Load", "Carregar"},
    {"Name", "Nome"},
    {"In use", "Em uso"},
    {"Old format", "Formato antigo"},
    {"Saved", "Salvo"},
    {"Loaded", "Carregado"},
    {"Renamed", "Renomeado"},
    {"Duplicated", "Duplicado"},
    {"Overwritten", "Substituído"},
    {"Deleted", "Excluído"},
    {"Imported", "Importado"},
    {"Folder selected", "Pasta selecionada"},
    {"Delete failed", "Falha ao excluir"},
    {"Choose a folder first", "Escolha uma pasta primeiro"},
    {"Folder unavailable", "Pasta indisponível"},
    {"Enter a name", "Digite um nome"},
    {"Name already used", "Nome já utilizado"},
    {"Not a valid config", "Configuração inválida"},
    {"File not found", "Arquivo não encontrado"},
    {"Save failed", "Falha ao salvar"},
    {"Unreadable", "Ilegível"},
    {"Too large", "Muito grande"},
    {"Not a config", "Não é uma configuração"},
    {"Invalid structure", "Estrutura inválida"},
    {"Newer version", "Versão mais recente"},
    {"Invalid name", "Nome inválido"},
    {"Invalid values", "Valores inválidos"},
    {"Settings", "Configurações"},
    {"Verified", "Verificado"},
    {"Lua storage unavailable", "Armazenamento Lua indisponível"},
    {"Running", "Em execução"},
    {"Stopped", "Parado"},
    {"Starting", "Iniciando"},
    {"Over budget", "Limite excedido"},
    {"Logs", "Registros"},
    {"Open", "Abrir"},
    {"Show", "Mostrar"},
    {"Report saved to Desktop", "Relatório salvo na Área de Trabalho"},
    {"Report failed", "Falha ao salvar relatório"},
    {"Last session crashed", "A última sessão falhou"},
    {"Error", "Erro"},
    {"Warning", "Aviso"},
    {"Notice", "Notificação"},
    {"Open the menu to close this message.", "Abra o menu para fechar esta mensagem."},
    {"Welcome to Vesta", "Boas-vindas ao Vesta"},
    {"Step %d of %d", "Etapa %d de %d"},
    {"Choose your language. It applies at once and is saved with your settings.", "Escolha seu idioma. A alteração é imediata e fica salva nas configurações."},
    {"Open / close the menu", "Abrir / fechar o menu"},
    {"Exit Vesta", "Sair do Vesta"},
    {"The two actions need different keys.", "As duas ações precisam de teclas diferentes."},
    {"This key cannot be used.", "Esta tecla não pode ser usada."},
    {"The new keys work now, but hotkeys.cfg could not be saved.", "As novas teclas já funcionam, mas não foi possível salvar hotkeys.cfg."},
    {"Hotkeys", "Teclas de atalho"},
    {"Good to know", "É bom saber"},
    {"Open data folder", "Abrir pasta de dados"},
    {"Performance", "Desempenho"},
    {"Back", "Voltar"},
    {"Next", "Avançar"},
    {"Finish", "Concluir"},
    {"Skip", "Pular"},
    {"First-run Guide", "Guia de primeiros passos"},
    {"Show Again", "Mostrar novamente"},
    {"LANGUAGE", "IDIOMA"},
    {"Language", "Idioma"},
    {"General", "Geral"},
    {"Interface Colors", "Cores da interface"},
    {"Typography", "Tipografia"},
    {"Primary Text", "Texto principal"},
    {"Muted Text", "Texto secundário"},#pragma once

#include <string_view>

namespace render::localization
{

enum class id : int
{
    en = 0,
    ru = 1,
    pt_br = 2,
    count
};

// The language chosen in the settings (config::general_profile::language); there is no separate UI state.
[[nodiscard]] id current();

// Short label for the language switch itself ("EN" / "RU" / "PT-BR").
[[nodiscard]] const char* code(id value);

[[nodiscard]] const char* tr(const char* english);

// Same, for text built at runtime. Only the fixed fragments are looked up.
[[nodiscard]] std::string_view tr(std::string_view english);

} // namespace render::localization
