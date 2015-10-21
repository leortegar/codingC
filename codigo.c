#include <stdio.h>
#include <libintl.h>
#include <locale.h>

#define _(cadena) gettext(cadena)

int main(int argc, const char *argv[]){
	bind_textdomain_codeset ("codigo", "UTF-8");
	setlocale(LC_ALL, "");
	bindtextdmain("codigo", "idioma");
	textdomain("codigo");
	char cadena[] = "Hola mundo piñata!";
	#char cadena1[] = _("Hola mundo piñata");

	printf(_("Hola alumnos Intel-BUAP\n"));

	return 0;
}


