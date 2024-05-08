#ifndef CONNECTION_H
#define CONNECTION_H

class Connection
{
    public:
        QSqlDatabase Connect();
        void Disconnect(QSqlDatabase conn);
};

#endif // CONNECTION_H
