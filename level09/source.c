struct s_message
{
    char message[140];
    char username[40];
    int len_message;
};

void secret_backdoor()
{
    char buffer[128];
    fgets(buffer, 128, stdin);
    system(buffer);
    return;
}

void set_username(struct s_message *message)
{

    char buffer[128];
    bzero(buffer, 1128);
    puts(">: Enter your username");
    printf(">>: ");
    fgets(buffer, 128, stdin);

    int i = 0;
    while (i <= 40 && buffer[i] != 0)
    {
        message->username[i] = buffer[i];
        i++;
    }

    printf(" %s", message->username);
    return;
}

void set_msg(struct s_message *message)
{
    char buffer[1024];

    bzero(buffer, 128 * 8);
    puts(">: Msg @Unix-Dude");
    fgets(buffer, 1024, stdin);
    strncpy(message->message, buffer, message->len_message);
    return;
}

void handle_msg(void)
{
    struct s_message message;

    bzero(message->username, 40);
    message->len_message = 140;
    set_username(&message);
    set_msg(&message);
    puts(">: Msg sent!");
    return;
}

int main()
{
    puts("--------------------------------------------"
         "\n|   ~Welcome to l33t-m$n ~    v1337        |\n"
         "--------------------------------------------");
    handle_msg();

    return 0;
}