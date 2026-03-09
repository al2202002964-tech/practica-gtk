#include <gtk/gtk.h>

/* funcion que se ejecuta cuando se presiona el boton */
static void boton_presionado(GtkWidget *widget, gpointer data)
{
    GtkWidget *dialog;

    dialog = gtk_message_dialog_new(NULL,
                                    GTK_DIALOG_MODAL,
                                    GTK_MESSAGE_INFO,
                                    GTK_BUTTONS_OK,
                                    "Hola! Gracias por presionar el boton");

    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

/* funcion principal que crea la ventana */
static void activate(GtkApplication *app, gpointer user_data)
{
    GtkWidget *window;
    GtkWidget *button;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Practica GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    button = gtk_button_new_with_label("Presioname");

    g_signal_connect(button, "clicked", G_CALLBACK(boton_presionado), NULL);

    gtk_container_add(GTK_CONTAINER(window), button);

    gtk_widget_show_all(window);
}

int main(int argc, char **argv)
{
    GtkApplication *app;
    int status;

    app = gtk_application_new("org.practica.gtk", G_APPLICATION_FLAGS_NONE);

    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);

    return status;
}
