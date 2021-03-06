#include<gtk/gtk.h>

int main(int argc, char *argv[])
{
	gtk_init(&argc,&argv);

	GtkWidget *window, *image;

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(window,"delete-event",gtk_main_quit,NULL);

	image = gtk_image_new_from_stock(GTK_STOCK_NEW,GTK_ICON_SIZE_DIALOG);

	gtk_container_add(GTK_CONTAINER(window),image);

	gtk_widget_show_all(window);

	gtk_main();
	return 0;
}