#ifndef INCLUDE_ICONS_H
#define INCLUDE_ICONS_H

#if defined(ICONS_GENERATE) || defined(ICONS_ENABLED)

/*
 * 1st arg = ICONS_IN_TERM
 *
 * 2nd arg = NERD ICONS
 * You can find hex codes for nerd fonts here: https://www.nerdfonts.com/cheat-sheet
 *
 * 3rd arg = EMOJIS
 * You can find a list of emoji here: https://unicode.org/Public/emoji/5.0/emoji-test.txt
 *
 * Any entry with empty icon gets removed by the hash-table generator
 */
#if defined(ICONS_IN_TERM)
	#define ICON_STR(I, N, E) I
	#include "icons-in-terminal.h"
#elif defined(NERD)
	#define ICON_STR(I, N, E) N
#elif defined(EMOJI)
	#define ICON_STR(I, N, E) E
#endif

/*
 * Define a string to be printed before and after the icon
 * Adjust if the icons are not printed properly
 */
#if defined(EMOJI)
	/*
	 * NOTE: As some emojis take up two cells, all of the emoji icons must
	 * be of width 2. Therefore, right pad single-width emoji with a space.
	 */
	#define ICON_SIZE 2
	#define ICON_PADDING_RIGHT " "
#else
	#define ICON_SIZE 1
	#define ICON_PADDING_RIGHT "  "
#endif
#define ICON_PADDING_LEFT  ""
#define ICON_PADDING_LEFT_LEN  (sizeof ICON_PADDING_LEFT  - 1)
#define ICON_PADDING_RIGHT_LEN (sizeof ICON_PADDING_RIGHT - 1)

/* ARROWS */
#define ICON_ARROW_UP      ICON_STR(MD_ARROW_UPWARD, "󰁝", "⬆")
#define ICON_ARROW_FORWARD ICON_STR(MD_ARROW_FORWARD, "󰁔", "➡")
#define ICON_ARROW_DOWN    ICON_STR(MD_ARROW_DOWNWARD, "󰁅", "⬇")

/* GENERIC */
#define ICON_DIRECTORY     ICON_STR(FA_FOLDER, "", "📂")
#define ICON_FILE          ICON_STR(FA_FILE, "", "📃")
#define ICON_EXEC          ICON_STR(FA_COG, "", "⚙️ ")

/* Top level and common icons */
#define ICON_APPLE         ICON_STR(FA_APPLE, "", "")
#define ICON_ARCHIVE       ICON_STR(FA_FILE_ARCHIVE_O, "", "📦")
#define ICON_AWESOME       ICON_STR("", "", "")
#define ICON_BUILD         ICON_STR(FA_WRENCH, "", "")
#define ICON_BSPWM         ICON_STR("", "", "")
#define ICON_BUILDFOLDER   ICON_STR(FA_WRENCH, "󱧼", "")
#define ICON_BRIEFCASE     ICON_STR(FA_BRIEFCASE, "󰃖", "💼")
#define ICON_C             ICON_STR(MFIZZ_C, "", "🇨 ")
#define ICON_CACHE         ICON_STR("", "󰝉", "")
#define ICON_CHEADER       ICON_STR("\uf0fd", "", "")
#define ICON_CHANGELOG     ICON_STR(FA_HISTORY, "󰋚", "🔺")
#define ICON_CHESS         ICON_STR("", "󰄺", "")
#define ICON_CHROME        ICON_STR(FA_CHROME, "", "")
#define ICON_CLOJURE       ICON_STR(MFIZZ_CLOJURE, "", "")
#define ICON_CODE          ICON_STR("", "󰗀", "")
#define ICON_CONFIGURE     ICON_STR(FILE_CONFIG, "", "🔧")
#define ICON_CONFFOLDER    ICON_STR("", "", "")
#define ICON_CPLUSPLUS     ICON_STR(MFIZZ_CPLUSPLUS, "", ICON_C)
#define ICON_CRYSTAL       ICON_STR("", "", "")
#define ICON_DATABASE      ICON_STR(MFIZZ_DATABASE_ALT2, "", "🗃️ ")
#define ICON_DESKTOP       ICON_STR(FA_DESKTOP, "", "🖥️ ")
#define ICON_DJVU          ICON_STR(FA_PAPERCLIP, "", "📎")
#define ICON_DOCUMENT      ICON_STR(FA_FILE_TEXT_O, "󰈙", "🗒 ")
#define ICON_DOWNLOADS     ICON_STR(FA_DOWNLOAD, "󰉍", "📥")
#define ICON_DWM           ICON_STR("", "", "")
#define ICON_ELIXIR        ICON_STR(MFIZZ_ELIXIR, "", "💧")
#define ICON_EMACS         ICON_STR(FILE_EMACS, "", "")
#define ICON_ENCRYPT       ICON_STR("", "󰌆", "🔒")
#define ICON_FSHARP        ICON_STR(DEV_FSHARP, "", "")
#define ICON_FONT          ICON_STR(FILE_FONT, "", "")
#define ICON_GIT           ICON_STR(FA_GIT, "", "")
#define ICON_GITFOLDER     ICON_STR(FA_GIT, "", "🌱")
#define ICON_GHFOLDER      ICON_STR(DEV_GITHUB, "", "")
#define ICON_GTK           ICON_STR("", "", "")
#define ICON_HASKELL       ICON_STR("", "", "")
#define ICON_HTML          ICON_STR(FA_FILE_CODE_O, "󰌝", "")
#define ICON_HYPR          ICON_STR("", "", "")
#define ICON_JAVA          ICON_STR(MFIZZ_JAVA, "", "☕")
#define ICON_JAVASCRIPT    ICON_STR(FA_FILE_CODE_O, "", "")
#define ICON_KEY           ICON_STR("", "", "")
#define ICON_KEYS          ICON_STR("", "", "")
#define ICON_KEYFOLDER     ICON_STR("", "󰢬", "")
#define ICON_LICENSE       ICON_STR(FA_COPYRIGHT, "󰈙", "⚖️ ")
#define ICON_LINUX         ICON_STR(FA_LINUX, "󰌽", "🐧")
#define ICON_MAIL          ICON_STR(FA_ENVELOPE, "󰇰", "")
#define ICON_MAKEFILE      ICON_STR(FILE_CMAKE, "", "🛠 ")
#define ICON_MANUAL        ICON_STR(FILE_MANPAGE, "󱓷", "❓")
#define ICON_MS_EXCEL      ICON_STR(FILE_EXCEL, "", ICON_WORDDOC)
#define ICON_MUSIC         ICON_STR(FA_MUSIC, "󱍙", "🎧")
#define ICON_MUSICFILE     ICON_STR(FA_FILE_AUDIO_O, "", ICON_MUSIC)
#define ICON_NETFOLDER     ICON_STR("", "󰡰", "")
#define ICON_NODEJS        ICON_STR(DEV_NODEJS, "", "")
#define ICON_NPM           ICON_STR(DEV_NPM, "", "")
#define ICON_OCAML         ICON_STR(FILE_OCAML, "", "")
#define ICON_OPTICALDISK   ICON_STR(LINEA_MUSIC_CD, "", "💿")
#define ICON_ORG           ICON_STR(FILE_EMACS, "", "")
#define ICON_PDF           ICON_STR(FA_FILE_PDF_O, "", "📕")
#define ICON_PHOTOSHOP     ICON_STR(DEV_PHOTOSHOP, "", ICON_PICTUREFILE)
#define ICON_PICTUREFILE   ICON_STR(FA_FILE_IMAGE_O, "󰈟", ICON_PICTURES)
#define ICON_PICTURES      ICON_STR(MD_CAMERA_ALT, "󰉔", "🎨")
#define ICON_PLAYLIST      ICON_STR(LINEA_MUSIC_PLAYLIST, "󰲹", "")
#define ICON_POWERPOINT    ICON_STR(FILE_POWERPOINT, "", "📊")
#define ICON_PUBLIC        ICON_STR(FA_INBOX, "", "👀")
#define ICON_PYTHON        ICON_STR(MFIZZ_PYTHON, "", "🐍")
#define ICON_QT            ICON_STR("", "", "")
#define ICON_REACT         ICON_STR(FILE_JSX, "", ICON_JAVASCRIPT)
#define ICON_ROOT          ICON_STR("", "󰉐", "")
#define ICON_RUBY          ICON_STR(MFIZZ_RUBY, "", "💎")
#define ICON_RUST          ICON_STR(DEV_RUST, "", "")
#define ICON_SASS          ICON_STR(DEV_SASS, "", "")
#define ICON_SCRIPT        ICON_STR(MFIZZ_SCRIPT, "", "📜")
#define ICON_SHELL         ICON_STR("", "󱆃", "")
#define ICON_SHIELDCHECK   ICON_STR("", "󰕥", "")
#define ICON_SHIELDLOCK    ICON_STR("", "󰦝", "")
#define ICON_STEAM         ICON_STR(FA_STEAM, "", "")
#define ICON_STEAMS        ICON_STR(FA_STEAM_SQUARE, "", "")
#define ICON_SUBLIME       ICON_STR(DEV_SUBLIME, "", "")
#define ICON_SUBTITLE      ICON_STR(FA_COMMENTS_O, "󰨖", "💬")
#define ICON_SWAY          ICON_STR("", "", "")
#define ICON_TEMPLATES     ICON_STR(FA_PAPERCLIP, "󰗇", "📎")
#define ICON_TEST          ICON_STR("", "󰙨", "")
#define ICON_TEX           ICON_STR(FILE_TEX, "󰙩", ICON_DOCUMENT)
#define ICON_TORRENT       ICON_STR(FA_MAGNET, "", "")
#define ICON_VIDEOFILE     ICON_STR(FA_FILE_MOVIE_O, "", ICON_VIDEOS)
#define ICON_VIDEOS        ICON_STR(FA_FILM, "", "🎞 ")
#define ICON_VIM           ICON_STR(DEV_VIM, "", "")
#define ICON_VISUALSTUDIO  ICON_STR(DEV_VISUALSTUDIO, "", "")
#define ICON_WEBPACK       ICON_STR(FILE_WEBPACK, "󰜫", "")
#define ICON_WINCMD        ICON_STR(FA_WINDOWS, "", "")
#define ICON_WINDLL        ICON_STR(FA_WINDOWS, "", "")
#define ICON_WINDOWS       ICON_STR(FA_WINDOWS, "", "")
#define ICON_WORDDOC       ICON_STR(FILE_WORD, "", "📘")
#define ICON_ZIG           ICON_STR("", "", " ")

#define ICON_EXT_ASM       ICON_STR(FILE_NASM, "", "")
#define ICON_EXT_BIN       ICON_STR(OCT_FILE_BINARY, "", "📓")
#define ICON_EXT_COFFEE    ICON_STR(MFIZZ_COFFEE_BEAN, "", "")
#define ICON_EXT_CSS       ICON_STR(MFIZZ_CSS3, "", "🦋")
#define ICON_EXT_DEB       ICON_STR(MFIZZ_DEBIAN, "", ICON_LINUX)
#define ICON_EXT_DIFF      ICON_STR(FILE_DIFF, "", "📋")
#define ICON_EXT_EL        ICON_STR(FILE_LISP, "", "")
#define ICON_EXT_GO        ICON_STR(MFIZZ_GO, "", "")
#define ICON_EXT_JSON      ICON_STR(ICON_JAVASCRIPT, "", ICON_JAVASCRIPT)
#define ICON_EXT_LUA       ICON_STR(FILE_LUA, "", "🌘")
#define ICON_EXT_M         ICON_STR("", "󰠞", "📊")
#define ICON_EXT_MAT       ICON_STR("", "", "")
#define ICON_EXT_MD        ICON_STR(DEV_MARKDOWN, "", "📝")
#define ICON_EXT_MSI       ICON_STR(FA_WINDOWS, "󰍲", "🪟")
#define ICON_EXT_NIX       ICON_STR(LINUX_NIXOS, "", "")
#define ICON_EXT_PATCH     ICON_STR(FILE_PATCH, "", "🩹")
#define ICON_EXT_PL        ICON_STR(DEV_PERL, "", "")
#define ICON_EXT_PHP       ICON_STR(MFIZZ_PHP, "", "🌐")
#define ICON_EXT_ROM       ICON_STR(FA_LOCK, "󰊖", "")
#define ICON_EXT_RSS       ICON_STR(FA_RSS_SQUARE, "", "📡")
#define ICON_EXT_RTF       ICON_STR(ICON_PDF, "󰈦", ICON_PDF)
#define ICON_EXT_SCALA     ICON_STR(MFIZZ_SCALA, "", "")
#define ICON_EXT_SLN       ICON_STR(DEV_VISUALSTUDIO, "", "")
#define ICON_EXT_TS        ICON_STR(FILE_TS, "", "")


/*
 * Hex xterm 256 color code, 0 to follow file specific (if any)
 * Codes: https://jonasjacek.github.io/colors/
 * Spectrum sorted: https://upload.wikimedia.org/wikipedia/commons/1/15/Xterm_256color_chart.svg
 * Color names: https://www.ditig.com/256-colors-cheat-sheet
 */
#define COLOR_LIST \
	COLOR_X(COLOR_VIDEO,         45)  /* Turquoise2 */ \
	COLOR_X(COLOR_VIDEO1,       226)  /* Yellow1 */ \
	COLOR_X(COLOR_AUDIO,        220)  /* Gold1 */ \
	COLOR_X(COLOR_AUDIO1,       205)  /* HotPink */ \
	COLOR_X(COLOR_IMAGE,         82)  /* Chartreuse2 */ \
	COLOR_X(COLOR_DOCS,         202)  /* OrangeRed1 */ \
	COLOR_X(COLOR_ARCHIVE,      209)  /* Salmon1 */ \
	COLOR_X(COLOR_C,             81)  /* SteelBlue1 */ \
	COLOR_X(COLOR_JAVA,          32)  /* DeepSkyBlue3 */ \
	COLOR_X(COLOR_JAVASCRIPT,    47)  /* SpringGreen2 */ \
	COLOR_X(COLOR_REACT,         39)  /* DeepSkyBlue1 */ \
	COLOR_X(COLOR_CSS,          199)  /* DeepPink1 */ \
	COLOR_X(COLOR_PYTHON,       227)  /* LightGoldenrod1 */ \
	COLOR_X(COLOR_LUA,           19)  /* Blue3 */ \
	COLOR_X(COLOR_DOCUMENT,      15)  /* White */ \
	COLOR_X(COLOR_FSHARP,        31)  /* DeepSkyBlue3 */ \
	COLOR_X(COLOR_RUBY,         160)  /* Red3 */ \
	COLOR_X(COLOR_SCALA,        196)  /* Red1 */ \
	COLOR_X(COLOR_SHELL,         47)  /* SpringGreen2 */ \
	COLOR_X(COLOR_VIM,           28)  /* Green4 */ \
	COLOR_X(COLOR_ELIXIR,       104)  /* MediumPurple */ \
	COLOR_X(COLOR_EMACS,        109) \
	COLOR_X(COLOR_RUST,         215) \

/* X-Macro: https://en.wikipedia.org/wiki/X_Macro */
#define COLOR_X(N, V) N = (V),
enum { COLOR_LIST };
#undef COLOR_X
#define COLOR_X(N, V) N,
static const unsigned char init_colors[] = { COLOR_LIST };
#undef COLOR_X

#ifdef ICONS_GENERATE
	/* temporary struct using `char *`. the hash-table generator will
	 * output a more optimized version which uses `char[]` instead reducing
	 * indirection and the total binary size.
	 */
	struct icon_pair { const char *match; const char *icon; unsigned char color; };
#endif

struct icon { const char *icon; unsigned char color; };

static const struct icon dir_icon  = {ICON_DIRECTORY, 0};
static const struct icon file_icon = {ICON_FILE, 0};
static const struct icon exec_icon = {ICON_EXEC, 0};

static const struct icon_pair icons_name[] = {
	{"__pycache__",  ICON_PYTHON,   0},
	{".bash_history", ICON_SHELL,   0},
	{".bash_logout", ICON_SHELL,    0},
	{".bash_profile", ICON_SHELL,   0},
	{".bashrc",     ICON_SHELL,     0},
	{".cache",      ICON_CACHE,     0},
	{".cargo",      ICON_RUST,      0},
	{".config",     ICON_CONFFOLDER, 0},
	{".doom.d",     ICON_EMACS,     0},
	{".DS_Store",   ICON_APPLE,     0},
	{".emacs.d",    ICON_EMACS,     0},
	{".git",        ICON_GITFOLDER, 0},
	{".gitattributes", ICON_GIT,    0},
	{".gitconfig",  ICON_GIT,       0},
	{".github",     ICON_GHFOLDER,  0},
	{".gitignore",  ICON_GIT,       0},
	{".gitsubmodules", ICON_GIT,    0},
	{".gnupg",      ICON_KEYFOLDER, 0},
	{".mailcap",    ICON_MAIL,      0},
	{".muttrc",     ICON_CONFIGURE, 0},
	{".nix-channels", ICON_EXT_NIX,     COLOR_FSHARP},
	{".nix-defexpr", ICON_EXT_NIX,   0},
	{".nix-profile", ICON_EXT_NIX,   0},
	{".node_repl_history", ICON_NODEJS, 0},
	{".python_history", ICON_PYTHON, COLOR_PYTHON},
	{".spacemacs",  ICON_EMACS,     0},
	{".ssh",        ICON_KEYFOLDER, 0},
	{".viminfo",    ICON_VIM,       COLOR_VIM},
	{".Xauthority", ICON_CONFIGURE, 0},
	{".xinitrc",    ICON_SHELL,     0},
	{".Xresources", ICON_CONFIGURE, 0},
	{".zlogin",     ICON_SHELL,     0},
	{".zlogout",    ICON_SHELL,     0},
	{".zprofile",   ICON_SHELL,     0},
	{".zshrc",      ICON_SHELL,     0},
	{".zsh_history", ICON_SHELL,    0},
	{"authorized_keys", ICON_KEYS,  0},
	{"awesome",     ICON_AWESOME,   0},
	{"bashrc",      ICON_SHELL,     0},
	{"bin",         ICON_CONFFOLDER, 0},
	{"bspwm",       ICON_BSPWM,      0},
	{"bspwmrc",     ICON_BSPWM,      0},
	{"build",       ICON_BUILDFOLDER, 0},
	{"Cargo.lock",  ICON_RUST,      COLOR_RUST},
	{"Cargo.toml",  ICON_RUST,      COLOR_RUST},
	{"chrome-sandbox", ICON_CHROME, 0},
	{"chrome_crashpad_handler", ICON_CHROME, 0},
	{"composer.json", ICON_EXT_PHP, 0},
	{"composer.lock", ICON_EXT_PHP, 0},
	{"config.def.h", ICON_DWM,      COLOR_C},
	{"Desktop",     ICON_DESKTOP,   0},
	{"dmenu",       ICON_DWM,       0},
	{"dmenu.c",     ICON_DWM,       COLOR_C},
	{"Documents",   ICON_BRIEFCASE, 0},
	{"Downloads",   ICON_DOWNLOADS, 0},
	{"dwm",         ICON_DWM,       0},
	{"dwm.c",       ICON_DWM,       COLOR_C},
	{"early-init.el", ICON_EMACS,   COLOR_EMACS},
	{"etc",         ICON_CONFFOLDER, 0},
	{"flake.lock",  ICON_EXT_NIX,   COLOR_FSHARP},
	{"git",         ICON_GITFOLDER, 0},
	{"gtk-2.0",     ICON_GTK,       0},
	{"gtk-3.0",     ICON_GTK,       0},
	{"gtk-4.0",     ICON_GTK,       0},
	{"hypr",        ICON_HYPR,      0},
	{"hyprland.conf", ICON_HYPR,    0},
	{"hypridle.conf", ICON_HYPR,    0},
	{"hyprlock.conf", ICON_HYPR,    0},
	{"known_hosts", ICON_KEYS,      0},
	{"lib",         ICON_CODE,      0},
	{"lib64",       ICON_CODE,      0},
	{"Mail",        ICON_MAIL,      0},
	{"Music",       ICON_MUSIC,     0},
	{"nix",         ICON_EXT_NIX,   0},
	{"package.json", ICON_NODEJS,   0},
	{"package-lock.json", ICON_NODEJS, 0},
	{"php.ini",     ICON_EXT_PHP,   0},
	{"Pictures",    ICON_PICTURES,  0},
	{"Public",      ICON_PUBLIC,    0},
	{"pyproject.toml", ICON_PYTHON, COLOR_PYTHON},
	{"qt5ct",       ICON_QT,        0},
	{"qt6ct",       ICON_QT,        0},
	{"qutebrowser", ICON_QT,        0},
	{"Rakefile",    ICON_RUBY,      COLOR_RUBY},
	{"rc.lua",      ICON_AWESOME,   0},
	{"resources.pak", ICON_CHROME,  0},
	{"root",        ICON_ROOT,      0},
	{"rust-toolchain.toml", ICON_RUST, COLOR_RUST},
	{"rustfmt.toml", ICON_RUST,     COLOR_RUST},
	{"Seed",        ICON_NETFOLDER, 0},
	{"shard.lock",  ICON_CRYSTAL,   0},
	{"shard.yml",   ICON_CRYSTAL,   0},
	{"sway",        ICON_SWAY,      0},
	{"swaybg",      ICON_SWAY,      0},
	{"swayimg",     ICON_SWAY,      0},
	{"swaylock",    ICON_SWAY,      0},
	{"sxhkd",       ICON_BSPWM,     0},
	{"sxhkdrc",     ICON_BSPWM,     0},
	{"snapshot_blob.bin", ICON_CHROME, 0},
	{"src",         ICON_BUILDFOLDER, 0},
	{"steam_appid.txt", ICON_STEAM, 0},
	{"sudoers.d",   ICON_KEYFOLDER, 0},
	{"Templates",   ICON_TEMPLATES, 0},
	{"test",        ICON_TEST,      0},
	{"tests",       ICON_TEST,      0},
	{"Uploads",     ICON_NETFOLDER, 0},
	{"v8_context_snapshot.bin", ICON_CHROME, 0},
	{"Videos",      ICON_VIDEOS,    0},
	{"webpack.config.js", ICON_WEBPACK, 0},
	{"CHANGELOG",   ICON_CHANGELOG, COLOR_DOCS},
	{"configure",   ICON_BUILD,     0},
	{"config.el",   ICON_EMACS,     COLOR_EMACS},
	{"init.el",     ICON_EMACS,     COLOR_EMACS},
	{"packages.el", ICON_EMACS,     COLOR_EMACS},
	{"License",     ICON_LICENSE,   COLOR_DOCS},
	{"Makefile",    ICON_MAKEFILE,  0},
	{"meson.build", ICON_BUILD,     0},
};

#ifdef ICONS_GENERATE
/*
 * The goal here is to provide a small set of default values. We don't try to
 * provide icons for everything under the sun because keeping a _huge_ table of
 * icons would: increase binary size, increase memory usage, decrease performance.
 *
 * Users are free to customize this *locally* as they see fit. Only open a
 * pull-request if you think your changes are aligned with the goal described
 * above.
 */

static const struct icon_pair icons_ext[] = { /* All entries are case-insensitive */
	/* Numbers */
	{"1",          ICON_MANUAL,         COLOR_DOCS},
	{"7z",         ICON_ARCHIVE,        COLOR_ARCHIVE},

	/* A */
	{"added",      ICON_TORRENT,        0},
	{"a",          ICON_MANUAL,         0},
	{"aiff",       ICON_MUSICFILE,      COLOR_AUDIO},
	{"ape",        ICON_MUSICFILE,      COLOR_AUDIO},
	{"apk",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"asc",        ICON_SHIELDLOCK,     COLOR_ARCHIVE},
	{"asp",        ICON_CODE,           0},
	{"aspx",       ICON_CODE,           0},
	{"asm",        ICON_EXT_ASM,        0},
	{"aup",        ICON_MUSICFILE,      COLOR_AUDIO},
	{"aup3",       ICON_MUSICFILE,      COLOR_AUDIO},
	{"avi",        ICON_VIDEOFILE,      COLOR_VIDEO},
	{"avif",       ICON_PICTUREFILE,    COLOR_IMAGE},

	/* B */
	{"bat",        ICON_WINCMD,         0},
	{"bib",        ICON_TEX,            0},
	{"bin",        ICON_EXT_BIN,        0},
	{"bmp",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"bmz",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"bns",        ICON_EXT_JSON,       0},
	{"bsp",        ICON_STEAM,          0},
	{"bz2",        ICON_ARCHIVE,        COLOR_ARCHIVE},

	/* C */
	{"c",          ICON_C,              COLOR_C},
	{"c++",        ICON_CPLUSPLUS,      COLOR_C},
	{"cabal",      ICON_HASKELL,        COLOR_VIDEO},
	{"cab",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"cbr",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"cbz",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"cc",         ICON_CPLUSPLUS,      COLOR_C},
	{"cfg",        ICON_CONFIGURE,      0},
	{"cgi",        ICON_EXT_PL,         0},
	{"class",      ICON_JAVA,           COLOR_JAVA},
	{"clj",        ICON_CLOJURE,        0},
	{"cljc",       ICON_CLOJURE,        0},
	{"cljs",       ICON_CLOJURE,        0},
	{"cls",        ICON_TEX,            0},
	{"cmake",      ICON_MAKEFILE,       0},
	{"coffee",     ICON_EXT_COFFEE,     0},
	{"com",        ICON_WINCMD,         0},
	{"conf",       ICON_CONFIGURE,      0},
	{"cpio",       ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"cpp",        ICON_CPLUSPLUS,      COLOR_C},
	{"cr",         ICON_CRYSTAL,        0},
	{"css",        ICON_EXT_CSS,        COLOR_CSS},
	{"cue",        ICON_PLAYLIST,       COLOR_AUDIO},
	{"cvs",        ICON_CONFIGURE,      0},
	{"cxx",        ICON_CPLUSPLUS,      COLOR_C},

	/* D */
	{"db",         ICON_DATABASE,       0},
	{"dbproj",     ICON_VISUALSTUDIO,   0},
	{"deb",        ICON_EXT_DEB,        COLOR_ARCHIVE},
	{"diff",       ICON_EXT_DIFF,       0},
	{"djvu",       ICON_DJVU,           COLOR_DOCS},
	{"dll",        ICON_WINDLL,         0},
	{"dmg",        ICON_OPTICALDISK,    COLOR_ARCHIVE},
	{"doc",        ICON_WORDDOC,        COLOR_DOCUMENT},
	{"docx",       ICON_WORDDOC,        COLOR_DOCUMENT},
	{"download",   ICON_CHANGELOG,      0},
	{"dylib",      ICON_APPLE,          0},

	/* E */
	{"ejs",        ICON_JAVASCRIPT,     COLOR_JAVASCRIPT},
	{"el",         ICON_EXT_EL,         COLOR_EMACS},
	{"elc",        ICON_EXT_EL,         COLOR_EMACS},
	{"elf",        ICON_LINUX,          0},
	{"epub",       ICON_PDF,            COLOR_DOCS},
	{"exe",        ICON_WINDOWS,        0},
	{"ex",         ICON_ELIXIR,         COLOR_ELIXIR},
	{"eex",        ICON_ELIXIR,         COLOR_ELIXIR},
	{"exs",        ICON_ELIXIR,         COLOR_ELIXIR},

	/* F */
	{"f#",         ICON_FSHARP,         COLOR_FSHARP},
	{"fen",        ICON_CHESS,          0},
	{"fish",       ICON_SCRIPT,         0},
	{"flac",       ICON_MUSICFILE,      COLOR_AUDIO1},
	{"flv",        ICON_VIDEOFILE,      COLOR_VIDEO},
	{"fs",         ICON_FSHARP,         COLOR_FSHARP},
	{"fsi",        ICON_FSHARP,         COLOR_FSHARP},
	{"fsscript",   ICON_FSHARP,         COLOR_FSHARP},
	{"fsx",        ICON_FSHARP,         COLOR_FSHARP},

	/* G */
	{"gem",        ICON_RUBY,           COLOR_RUBY},
	{"gemfile",    ICON_RUBY,           COLOR_RUBY},
	{"gemspec",    ICON_RUBY,           COLOR_RUBY},
	{"gif",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"go",         ICON_EXT_GO,         COLOR_C},
	{"gpg",        ICON_SHIELDLOCK,     COLOR_ARCHIVE},
	{"gpg-agent",  ICON_SHIELDLOCK,     COLOR_ARCHIVE},
	{"gz",         ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"gzip",       ICON_ARCHIVE,        COLOR_ARCHIVE},

	/* H */
	{"h",          ICON_CHEADER,        COLOR_C},
	{"hh",         ICON_CPLUSPLUS,      COLOR_C},
	{"hpp",        ICON_CHEADER,        COLOR_C},
	{"hs",         ICON_HASKELL,        COLOR_ELIXIR},
	{"htaccess",   ICON_CONFIGURE,      0},
	{"htpasswd",   ICON_CONFIGURE,      0},
	{"htm",        ICON_HTML,           0},
	{"html",       ICON_HTML,           0},
	{"hxx",        ICON_CHEADER,        COLOR_C},
	{"heex",       ICON_ELIXIR,         COLOR_ELIXIR},

	/* I */
	{"ico",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"ini",        ICON_CONFIGURE,      0},
	{"img",        ICON_OPTICALDISK,    COLOR_ARCHIVE},
	{"iso",        ICON_OPTICALDISK,    COLOR_ARCHIVE},

	/* J */
	{"jar",        ICON_JAVA,           COLOR_JAVA},
	{"java",       ICON_JAVA,           COLOR_JAVA},
	{"jl",         ICON_CONFIGURE,      0},
	{"jpeg",       ICON_PICTUREFILE,    COLOR_IMAGE},
	{"jpg",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"js",         ICON_JAVASCRIPT,     COLOR_JAVASCRIPT},
	{"json",       ICON_EXT_JSON,       COLOR_JAVASCRIPT},
	{"jsp",        ICON_JAVA,           COLOR_JAVA},
	{"jsx",        ICON_REACT,          COLOR_REACT},
	{"jxl",        ICON_PICTUREFILE,    COLOR_IMAGE},

	/* K */
	{"kbx",        ICON_KEYS,           COLOR_ARCHIVE},
	{"key",        ICON_ENCRYPT,        COLOR_ARCHIVE},
	{"ksh",        ICON_SCRIPT,         COLOR_SHELL},

	/* L */
	{"lha",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"lhs",        ICON_HASKELL,        COLOR_VIM},
	{"log",        ICON_DOCUMENT,       0},
	{"lua",        ICON_EXT_LUA,        COLOR_LUA},
	{"lzh",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"lzma",       ICON_ARCHIVE,        COLOR_ARCHIVE},

	/* M */
	{"m",          ICON_EXT_M,          COLOR_C},
	{"m3u",        ICON_PLAYLIST,       COLOR_AUDIO},
	{"m4a",        ICON_MUSICFILE,      COLOR_AUDIO},
	{"m4v",        ICON_VIDEOFILE,      COLOR_VIDEO},
	{"markdown",   ICON_EXT_MD,         COLOR_DOCS},
	{"mat",        ICON_EXT_MAT,        COLOR_C},
	{"md",         ICON_EXT_MD,         COLOR_DOCS},
	{"md5",        ICON_SHIELDCHECK,    0},
	{"mk",         ICON_MAKEFILE,       0},
	{"mkv",        ICON_VIDEOFILE,      COLOR_VIDEO},
	{"ml",         ICON_OCAML,          0},
	{"mov",        ICON_VIDEOFILE,      COLOR_VIDEO},
	{"mp3",        ICON_MUSICFILE,      COLOR_AUDIO},
	{"mp4",        ICON_VIDEOFILE,      COLOR_VIDEO1},
	{"mpeg",       ICON_VIDEOFILE,      COLOR_VIDEO},
	{"mpg",        ICON_VIDEOFILE,      COLOR_VIDEO},
	{"msi",        ICON_EXT_MSI,        0},

	/* N */
	{"nix",        ICON_EXT_NIX,        COLOR_FSHARP},

	/* O */
	{"o",          ICON_EXT_BIN,        0},
	{"obj",        ICON_EXT_BIN,        0},
	{"ogg",        ICON_MUSICFILE,      COLOR_AUDIO},
	{"old",        ICON_CHANGELOG,      0},
	{"opus",       ICON_MUSICFILE,      COLOR_AUDIO},
	{"opdownload", ICON_DOWNLOADS,      0},
	{"org",        ICON_ORG,            COLOR_EMACS},
	{"otf",        ICON_FONT,           0},
	{"out",        ICON_SCRIPT,         0},

	/* P */
	{"part",       ICON_CHANGELOG,      0},
	{"patch",      ICON_EXT_PATCH,      0},
	{"pcf",        ICON_STEAM,          0},
	{"pdf",        ICON_PDF,            COLOR_DOCS},
	{"pgn",        ICON_CHESS,          0},
	{"phar",       ICON_EXT_PHP,        0},
	{"php",        ICON_EXT_PHP,        0},
	{"phy",        ICON_STEAM,          0},
	{"pl",         ICON_EXT_PL,         0},
	{"plist",      ICON_APPLE,          0},
	{"plx",        ICON_EXT_PL,         0},
	{"pm",         ICON_EXT_PL,         0},
	{"png",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"pod",        ICON_EXT_PL,         0},
	{"ppt",        ICON_POWERPOINT,     0},
	{"pptx",       ICON_POWERPOINT,     0},
	{"pro",        ICON_QT,             0},
	{"psb",        ICON_PHOTOSHOP,      0},
	{"psd",        ICON_PHOTOSHOP,      0},
	{"pub",        ICON_KEY,            0},
	{"py",         ICON_PYTHON,         COLOR_PYTHON},
	{"pyc",        ICON_PYTHON,         COLOR_PYTHON},
	{"pyd",        ICON_PYTHON,         COLOR_PYTHON},
	{"pyo",        ICON_PYTHON,         COLOR_PYTHON},

	/* Q */
	{"qcow2",      ICON_OPTICALDISK,    COLOR_ARCHIVE},

	/* R */
	{"rar",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"rb",         ICON_RUBY,           COLOR_RUBY},
	{"rc",         ICON_CONFIGURE,      0},
	{"rom",        ICON_EXT_ROM,        0},
	{"rpm",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"rs",         ICON_RUST,           COLOR_DOCS},
	{"rss",        ICON_EXT_RSS,        0},
	{"rtf",        ICON_DOCUMENT,        0},

	/* S */
	{"s",          ICON_EXT_ASM,        0},
	{"sass",       ICON_SASS,           COLOR_CSS},
	{"scpt",       ICON_APPLE,          0},
	{"scss",       ICON_SASS,           COLOR_CSS},
	{"sha256",     ICON_SHIELDCHECK,    0},
	{"sig",        ICON_SHIELDCHECK,    0},
	{"sig2",       ICON_SHIELDCHECK,    0},
	{"so",         ICON_EXT_BIN,        0},
	{"scala",      ICON_EXT_SCALA,      COLOR_SCALA},
	{"sh",         ICON_SCRIPT,         COLOR_SHELL},
	{"slim",       ICON_SCRIPT,         COLOR_DOCUMENT},
	{"sln",        ICON_EXT_SLN,        0},
	{"sql",        ICON_DATABASE,       0},
	{"srt",        ICON_SUBTITLE,       0},
	{"sty",        ICON_TEX,            0},
	{"sub",        ICON_SUBTITLE,       0},
	{"sublime-build", ICON_SUBLIME,     0},
	{"sublime-keymap", ICON_SUBLIME,    0},
	{"sublime-menu", ICON_SUBLIME,      0},
	{"sublime-options", ICON_SUBLIME,   0},
	{"sublime-package", ICON_SUBLIME,   0},
	{"sublime-project", ICON_SUBLIME,   0},
	{"sublime-session", ICON_SUBLIME,   0},
	{"sublime-settings", ICON_SUBLIME,  0},
	{"sublime-snippet", ICON_SUBLIME,   0},
	{"sublime-theme", ICON_SUBLIME,     0},
	{"svg",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"swp",        ICON_VIM,            COLOR_VIM},

	/* T */
	{"tar",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"tex",        ICON_TEX,            0},
	{"tga",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"tgz",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"tiff",       ICON_PICTUREFILE,    COLOR_IMAGE},
	{"tlz",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"torrent",    ICON_TORRENT,        0},
	{"ts",         ICON_EXT_TS,         COLOR_JAVASCRIPT},
	{"tsx",        ICON_REACT,          COLOR_REACT},
	{"txt",        ICON_DOCUMENT,       COLOR_DOCUMENT},
	{"txz",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"ttf",        ICON_FONT,           0},

	/* U */
	{"ui",         ICON_QT,             0},

	/* V */
	{"vbproj",     ICON_VISUALSTUDIO,   0},
	{"vcxproj",    ICON_VISUALSTUDIO,   0},
	{"vdproj",     ICON_VISUALSTUDIO,   0},
	{"vid",        ICON_VIDEOFILE,      COLOR_VIDEO},
	{"vim",        ICON_VIM,            COLOR_VIM},
	{"vimrc",      ICON_VIM,            COLOR_VIM},
	{"vmt",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"vpk",        ICON_STEAMS,         0},
	{"vtf",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"vtt",        ICON_SUBTITLE,       0},
	{"vtx",        ICON_STEAM,          0},
	{"vvd",        ICON_STEAM,          0},

	/* W */
	{"wasm",       ICON_EXT_BIN,        0},
	{"wat",        ICON_EXT_ASM,        0},
	{"wav",        ICON_MUSICFILE,      COLOR_AUDIO},
	{"webm",       ICON_VIDEOFILE,      COLOR_VIDEO},
	{"webp",       ICON_PICTUREFILE,    COLOR_IMAGE},
	{"wma",        ICON_MUSICFILE,      COLOR_AUDIO},
	{"wmv",        ICON_VIDEOFILE,      COLOR_VIDEO},

	/* X */
	{"xbps",       ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"xcf",        ICON_PICTUREFILE,    COLOR_IMAGE},
	{"xhtml",      ICON_HTML,           0},
	{"xls",        ICON_MS_EXCEL,       0},
	{"xlsx",       ICON_MS_EXCEL,       0},
	{"xml",        ICON_CODE,           0},
	{"xz",         ICON_ARCHIVE,        COLOR_ARCHIVE},

	/* Y */
	{"yaml",       ICON_CONFIGURE,      COLOR_DOCUMENT},
	{"yml",        ICON_CONFIGURE,      COLOR_DOCUMENT},
	{"yuck",       ICON_EXT_EL,         COLOR_EMACS},

	/* Z */
	{"z",          ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"zig",		   ICON_ZIG,            COLOR_DOCUMENT},
	{"zip",        ICON_ARCHIVE,        COLOR_ARCHIVE},
	{"zsh",        ICON_SCRIPT,         COLOR_SHELL},
	{"zst",        ICON_ARCHIVE,        COLOR_ARCHIVE},

	/* Other */
};
#endif

#endif /* defined(ICONS_GENERATE) || defined(ICONS_ENABLED) */

#endif /* INCLUDE_ICONS_H */
