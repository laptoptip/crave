#ifndef URGEMARKET_H
#define URGEMARKET_H

#include <QWidget>
#include <QTimer>
#include <QListWidgetItem>

namespace Ui {
    class UrgeMarket;
}

class UrgeMarket : public QWidget
{
    Q_OBJECT

public:
    explicit UrgeMarket(QWidget *parent = 0);
    ~UrgeMarket();
    void subscribeToCoreSignals();
    void unsubscribeFromCoreSignals();
    void updateCategories();

public slots:
    void updateCategory(QString category);

private:
    Ui::UrgeMarket *ui;
    

private slots:
    void on_tableWidget_itemSelectionChanged();
    void on_categoriesListWidget_currentItemChanged(QListWidgetItem* current, QListWidgetItem* previous);
    void on_buyButton_clicked();
    void on_viewDetailsButton_clicked();
    void on_copyAddressButton_clicked();
};

#endif // URGEMARKET_H
