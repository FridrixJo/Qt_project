#ifndef UNORDERED_MAP_H
#define UNORDERED_MAP_H

#include <QMainWindow>
#include "Unordered_mapSource.h"
#include <QMessageBox>

namespace Ui {
class Unordered_map;
}

class Unordered_map : public QMainWindow
{
    Q_OBJECT

public:
    explicit Unordered_map(QWidget *parent = nullptr);
    ~Unordered_map();

signals:
    void backToMain();

private:
    void insertUMap();
    void insert_or_assignUMap();
    void eraseUMap();
    void sizeUMap();
    void max_sizeUMap();
    void emptyUMap();
    void findUMap();
    void containsUMap();
    void clearUMap();
    void rehashUMap();
    void reserveUMap();
    void beginUMap();
    void backUMap();

    void print();

private slots:
    void on_back_Umap_clicked();

    void on_do_Umap_clicked();

private:
    Ui::Unordered_map *ui;
    unordered_map<std::string,int> m_Umap;
};

#endif // UNORDERED_MAP_H
