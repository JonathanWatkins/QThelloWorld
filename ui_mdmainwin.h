/********************************************************************************
** Form generated from reading UI file 'mdmainwin.ui'
**
** Created: Sun 17. Mar 23:37:56 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDMAINWIN_H
#define UI_MDMAINWIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mdmainwin
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSave_Settings;
    QAction *actionLoad_Settings;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_settings;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_element;
    QLabel *lattice_type_l;
    QLabel *sigma_l;
    QLabel *epsilon_l;
    QLabel *mass_l;
    QLabel *lattice_constant_l;
    QComboBox *lattice_type_cb;
    QPushButton *save_element_pb;
    QPushButton *load_element_pb;
    QLabel *sigma_unit_l;
    QComboBox *epsilon_unit_cb;
    QLabel *lattice_constant_unit_l;
    QLabel *mass_unit_l;
    QLineEdit *sigma_le;
    QLineEdit *epsilon_le;
    QLineEdit *mass_le;
    QLineEdit *lattice_constant_le;
    QLabel *element_l;
    QWidget *tab_environment;
    QLabel *init_temperature_l;
    QLabel *init_temperature_unit_l;
    QLabel *num_particles_l;
    QLineEdit *init_temperature_le;
    QLineEdit *num_particles_le;
    QRadioButton *radioButton;
    QWidget *tab_control;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *npe_rb;
    QRadioButton *nve_rb;
    QRadioButton *nvt_rb;
    QRadioButton *npt_rb;
    QLabel *constants_comment_l;
    QLabel *desired_pressure_l;
    QLabel *desired_temperature_l;
    QComboBox *desired_pressure_unit_cb;
    QLabel *desired_temperature_unit_l;
    QLineEdit *desire_temperature_le;
    QLineEdit *desired_pressure_le;
    QWidget *tab_simulation;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QLabel *time_step_unit_l;
    QLabel *time_step_l;
    QLabel *num_time_steps_l;
    QLineEdit *time_step_le;
    QLineEdit *num_time_steps_le;
    QGroupBox *groupBox_2;
    QLabel *inner_cutoff_l;
    QLabel *outer_cutoff_l;
    QLabel *inner_cutoff_unit_l;
    QLabel *outer_cutoff_unit_l;
    QLineEdit *inner_cutoff_le;
    QLineEdit *outer_cutoff_le;
    QWidget *tab_output;
    QLabel *measurement_interval_l;
    QSpinBox *measurement_interval_sb;
    QLabel *measurement_interval_timesteps_l;
    QGroupBox *groupBox_4;
    QCheckBox *msd_cb;
    QCheckBox *energy_total_cb;
    QCheckBox *diffoceff_cb;
    QCheckBox *energy_potential_cb;
    QCheckBox *energy_kinetic_cb;
    QCheckBox *cohesive_energy_cb;
    QCheckBox *pressure_cb;
    QCheckBox *cv_cb;
    QCheckBox *store_particle_possitions_cb;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *settings_bb;
    QWidget *tab_simulation_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *start_simulation_pb;
    QCheckBox *close_when_finished_cb;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *simulation_output_tb;
    QWidget *tab_plots;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuSettings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mdmainwin)
    {
        if (mdmainwin->objectName().isEmpty())
            mdmainwin->setObjectName(QString::fromUtf8("mdmainwin"));
        mdmainwin->resize(579, 504);
        actionExit = new QAction(mdmainwin);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(mdmainwin);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSave_Settings = new QAction(mdmainwin);
        actionSave_Settings->setObjectName(QString::fromUtf8("actionSave_Settings"));
        actionLoad_Settings = new QAction(mdmainwin);
        actionLoad_Settings->setObjectName(QString::fromUtf8("actionLoad_Settings"));
        centralWidget = new QWidget(mdmainwin);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_settings = new QWidget();
        tab_settings->setObjectName(QString::fromUtf8("tab_settings"));
        verticalLayout = new QVBoxLayout(tab_settings);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(tab_settings);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setUsesScrollButtons(true);
        tab_element = new QWidget();
        tab_element->setObjectName(QString::fromUtf8("tab_element"));
        lattice_type_l = new QLabel(tab_element);
        lattice_type_l->setObjectName(QString::fromUtf8("lattice_type_l"));
        lattice_type_l->setGeometry(QRect(10, 140, 81, 21));
        sigma_l = new QLabel(tab_element);
        sigma_l->setObjectName(QString::fromUtf8("sigma_l"));
        sigma_l->setGeometry(QRect(10, 50, 81, 21));
        epsilon_l = new QLabel(tab_element);
        epsilon_l->setObjectName(QString::fromUtf8("epsilon_l"));
        epsilon_l->setGeometry(QRect(10, 80, 81, 21));
        mass_l = new QLabel(tab_element);
        mass_l->setObjectName(QString::fromUtf8("mass_l"));
        mass_l->setGeometry(QRect(10, 110, 81, 21));
        lattice_constant_l = new QLabel(tab_element);
        lattice_constant_l->setObjectName(QString::fromUtf8("lattice_constant_l"));
        lattice_constant_l->setGeometry(QRect(10, 170, 91, 21));
        lattice_type_cb = new QComboBox(tab_element);
        lattice_type_cb->setObjectName(QString::fromUtf8("lattice_type_cb"));
        lattice_type_cb->setGeometry(QRect(110, 140, 81, 22));
        save_element_pb = new QPushButton(tab_element);
        save_element_pb->setObjectName(QString::fromUtf8("save_element_pb"));
        save_element_pb->setGeometry(QRect(10, 200, 91, 23));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(save_element_pb->sizePolicy().hasHeightForWidth());
        save_element_pb->setSizePolicy(sizePolicy);
        load_element_pb = new QPushButton(tab_element);
        load_element_pb->setObjectName(QString::fromUtf8("load_element_pb"));
        load_element_pb->setGeometry(QRect(110, 200, 91, 23));
        sigma_unit_l = new QLabel(tab_element);
        sigma_unit_l->setObjectName(QString::fromUtf8("sigma_unit_l"));
        sigma_unit_l->setGeometry(QRect(200, 50, 61, 21));
        epsilon_unit_cb = new QComboBox(tab_element);
        epsilon_unit_cb->setObjectName(QString::fromUtf8("epsilon_unit_cb"));
        epsilon_unit_cb->setGeometry(QRect(200, 80, 81, 22));
        lattice_constant_unit_l = new QLabel(tab_element);
        lattice_constant_unit_l->setObjectName(QString::fromUtf8("lattice_constant_unit_l"));
        lattice_constant_unit_l->setGeometry(QRect(200, 170, 61, 21));
        mass_unit_l = new QLabel(tab_element);
        mass_unit_l->setObjectName(QString::fromUtf8("mass_unit_l"));
        mass_unit_l->setGeometry(QRect(200, 110, 46, 16));
        sigma_le = new QLineEdit(tab_element);
        sigma_le->setObjectName(QString::fromUtf8("sigma_le"));
        sigma_le->setGeometry(QRect(110, 50, 81, 21));
        epsilon_le = new QLineEdit(tab_element);
        epsilon_le->setObjectName(QString::fromUtf8("epsilon_le"));
        epsilon_le->setGeometry(QRect(110, 80, 81, 21));
        mass_le = new QLineEdit(tab_element);
        mass_le->setObjectName(QString::fromUtf8("mass_le"));
        mass_le->setGeometry(QRect(110, 110, 81, 21));
        lattice_constant_le = new QLineEdit(tab_element);
        lattice_constant_le->setObjectName(QString::fromUtf8("lattice_constant_le"));
        lattice_constant_le->setGeometry(QRect(110, 170, 81, 21));
        element_l = new QLabel(tab_element);
        element_l->setObjectName(QString::fromUtf8("element_l"));
        element_l->setGeometry(QRect(10, 20, 91, 21));
        QFont font;
        font.setItalic(true);
        element_l->setFont(font);
        tabWidget->addTab(tab_element, QString());
        tab_environment = new QWidget();
        tab_environment->setObjectName(QString::fromUtf8("tab_environment"));
        init_temperature_l = new QLabel(tab_environment);
        init_temperature_l->setObjectName(QString::fromUtf8("init_temperature_l"));
        init_temperature_l->setGeometry(QRect(10, 50, 111, 21));
        init_temperature_unit_l = new QLabel(tab_environment);
        init_temperature_unit_l->setObjectName(QString::fromUtf8("init_temperature_unit_l"));
        init_temperature_unit_l->setGeometry(QRect(210, 50, 101, 21));
        num_particles_l = new QLabel(tab_environment);
        num_particles_l->setObjectName(QString::fromUtf8("num_particles_l"));
        num_particles_l->setGeometry(QRect(10, 20, 121, 21));
        init_temperature_le = new QLineEdit(tab_environment);
        init_temperature_le->setObjectName(QString::fromUtf8("init_temperature_le"));
        init_temperature_le->setGeometry(QRect(120, 50, 81, 21));
        num_particles_le = new QLineEdit(tab_environment);
        num_particles_le->setObjectName(QString::fromUtf8("num_particles_le"));
        num_particles_le->setGeometry(QRect(120, 20, 81, 21));
        radioButton = new QRadioButton(tab_environment);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(240, 180, 95, 20));
        tabWidget->addTab(tab_environment, QString());
        tab_control = new QWidget();
        tab_control->setObjectName(QString::fromUtf8("tab_control"));
        groupBox_3 = new QGroupBox(tab_control);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 273, 151));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        npe_rb = new QRadioButton(groupBox_3);
        npe_rb->setObjectName(QString::fromUtf8("npe_rb"));

        verticalLayout_5->addWidget(npe_rb);

        nve_rb = new QRadioButton(groupBox_3);
        nve_rb->setObjectName(QString::fromUtf8("nve_rb"));

        verticalLayout_5->addWidget(nve_rb);

        nvt_rb = new QRadioButton(groupBox_3);
        nvt_rb->setObjectName(QString::fromUtf8("nvt_rb"));

        verticalLayout_5->addWidget(nvt_rb);

        npt_rb = new QRadioButton(groupBox_3);
        npt_rb->setObjectName(QString::fromUtf8("npt_rb"));

        verticalLayout_5->addWidget(npt_rb);


        horizontalLayout_4->addLayout(verticalLayout_5);

        constants_comment_l = new QLabel(groupBox_3);
        constants_comment_l->setObjectName(QString::fromUtf8("constants_comment_l"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(constants_comment_l->sizePolicy().hasHeightForWidth());
        constants_comment_l->setSizePolicy(sizePolicy1);
        constants_comment_l->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(constants_comment_l);

        desired_pressure_l = new QLabel(tab_control);
        desired_pressure_l->setObjectName(QString::fromUtf8("desired_pressure_l"));
        desired_pressure_l->setGeometry(QRect(10, 170, 111, 21));
        desired_temperature_l = new QLabel(tab_control);
        desired_temperature_l->setObjectName(QString::fromUtf8("desired_temperature_l"));
        desired_temperature_l->setGeometry(QRect(10, 200, 111, 21));
        desired_pressure_unit_cb = new QComboBox(tab_control);
        desired_pressure_unit_cb->setObjectName(QString::fromUtf8("desired_pressure_unit_cb"));
        desired_pressure_unit_cb->setGeometry(QRect(210, 170, 81, 22));
        desired_temperature_unit_l = new QLabel(tab_control);
        desired_temperature_unit_l->setObjectName(QString::fromUtf8("desired_temperature_unit_l"));
        desired_temperature_unit_l->setGeometry(QRect(210, 200, 46, 16));
        desire_temperature_le = new QLineEdit(tab_control);
        desire_temperature_le->setObjectName(QString::fromUtf8("desire_temperature_le"));
        desire_temperature_le->setGeometry(QRect(120, 200, 81, 21));
        desired_pressure_le = new QLineEdit(tab_control);
        desired_pressure_le->setObjectName(QString::fromUtf8("desired_pressure_le"));
        desired_pressure_le->setGeometry(QRect(120, 170, 81, 21));
        tabWidget->addTab(tab_control, QString());
        tab_simulation = new QWidget();
        tab_simulation->setObjectName(QString::fromUtf8("tab_simulation"));
        widget = new QWidget(tab_simulation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1, 1, 291, 231));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 0));
        time_step_unit_l = new QLabel(groupBox);
        time_step_unit_l->setObjectName(QString::fromUtf8("time_step_unit_l"));
        time_step_unit_l->setGeometry(QRect(210, 30, 21, 21));
        time_step_l = new QLabel(groupBox);
        time_step_l->setObjectName(QString::fromUtf8("time_step_l"));
        time_step_l->setGeometry(QRect(10, 30, 101, 21));
        num_time_steps_l = new QLabel(groupBox);
        num_time_steps_l->setObjectName(QString::fromUtf8("num_time_steps_l"));
        num_time_steps_l->setGeometry(QRect(10, 60, 131, 21));
        time_step_le = new QLineEdit(groupBox);
        time_step_le->setObjectName(QString::fromUtf8("time_step_le"));
        time_step_le->setGeometry(QRect(120, 30, 81, 21));
        num_time_steps_le = new QLineEdit(groupBox);
        num_time_steps_le->setObjectName(QString::fromUtf8("num_time_steps_le"));
        num_time_steps_le->setGeometry(QRect(120, 60, 81, 21));

        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 0));
        inner_cutoff_l = new QLabel(groupBox_2);
        inner_cutoff_l->setObjectName(QString::fromUtf8("inner_cutoff_l"));
        inner_cutoff_l->setGeometry(QRect(10, 30, 71, 21));
        outer_cutoff_l = new QLabel(groupBox_2);
        outer_cutoff_l->setObjectName(QString::fromUtf8("outer_cutoff_l"));
        outer_cutoff_l->setGeometry(QRect(10, 60, 71, 21));
        inner_cutoff_unit_l = new QLabel(groupBox_2);
        inner_cutoff_unit_l->setObjectName(QString::fromUtf8("inner_cutoff_unit_l"));
        inner_cutoff_unit_l->setGeometry(QRect(170, 30, 71, 21));
        outer_cutoff_unit_l = new QLabel(groupBox_2);
        outer_cutoff_unit_l->setObjectName(QString::fromUtf8("outer_cutoff_unit_l"));
        outer_cutoff_unit_l->setGeometry(QRect(170, 60, 111, 21));
        inner_cutoff_le = new QLineEdit(groupBox_2);
        inner_cutoff_le->setObjectName(QString::fromUtf8("inner_cutoff_le"));
        inner_cutoff_le->setGeometry(QRect(80, 30, 81, 21));
        outer_cutoff_le = new QLineEdit(groupBox_2);
        outer_cutoff_le->setObjectName(QString::fromUtf8("outer_cutoff_le"));
        outer_cutoff_le->setGeometry(QRect(80, 60, 81, 21));

        verticalLayout_3->addWidget(groupBox_2);

        tabWidget->addTab(tab_simulation, QString());
        tab_output = new QWidget();
        tab_output->setObjectName(QString::fromUtf8("tab_output"));
        measurement_interval_l = new QLabel(tab_output);
        measurement_interval_l->setObjectName(QString::fromUtf8("measurement_interval_l"));
        measurement_interval_l->setGeometry(QRect(10, 20, 131, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(measurement_interval_l->sizePolicy().hasHeightForWidth());
        measurement_interval_l->setSizePolicy(sizePolicy2);
        measurement_interval_sb = new QSpinBox(tab_output);
        measurement_interval_sb->setObjectName(QString::fromUtf8("measurement_interval_sb"));
        measurement_interval_sb->setGeometry(QRect(130, 20, 81, 21));
        measurement_interval_sb->setMinimum(1);
        measurement_interval_sb->setMaximum(1000000);
        measurement_interval_sb->setValue(1);
        measurement_interval_timesteps_l = new QLabel(tab_output);
        measurement_interval_timesteps_l->setObjectName(QString::fromUtf8("measurement_interval_timesteps_l"));
        measurement_interval_timesteps_l->setGeometry(QRect(220, 20, 61, 21));
        groupBox_4 = new QGroupBox(tab_output);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 50, 273, 151));
        msd_cb = new QCheckBox(groupBox_4);
        msd_cb->setObjectName(QString::fromUtf8("msd_cb"));
        msd_cb->setGeometry(QRect(10, 120, 51, 21));
        energy_total_cb = new QCheckBox(groupBox_4);
        energy_total_cb->setObjectName(QString::fromUtf8("energy_total_cb"));
        energy_total_cb->setGeometry(QRect(140, 30, 101, 21));
        diffoceff_cb = new QCheckBox(groupBox_4);
        diffoceff_cb->setObjectName(QString::fromUtf8("diffoceff_cb"));
        diffoceff_cb->setGeometry(QRect(10, 30, 101, 21));
        energy_potential_cb = new QCheckBox(groupBox_4);
        energy_potential_cb->setObjectName(QString::fromUtf8("energy_potential_cb"));
        energy_potential_cb->setGeometry(QRect(140, 90, 121, 21));
        energy_kinetic_cb = new QCheckBox(groupBox_4);
        energy_kinetic_cb->setObjectName(QString::fromUtf8("energy_kinetic_cb"));
        energy_kinetic_cb->setGeometry(QRect(140, 60, 111, 21));
        cohesive_energy_cb = new QCheckBox(groupBox_4);
        cohesive_energy_cb->setObjectName(QString::fromUtf8("cohesive_energy_cb"));
        cohesive_energy_cb->setGeometry(QRect(140, 120, 121, 21));
        pressure_cb = new QCheckBox(groupBox_4);
        pressure_cb->setObjectName(QString::fromUtf8("pressure_cb"));
        pressure_cb->setGeometry(QRect(10, 60, 71, 21));
        cv_cb = new QCheckBox(groupBox_4);
        cv_cb->setObjectName(QString::fromUtf8("cv_cb"));
        cv_cb->setGeometry(QRect(10, 90, 41, 21));
        store_particle_possitions_cb = new QCheckBox(tab_output);
        store_particle_possitions_cb->setObjectName(QString::fromUtf8("store_particle_possitions_cb"));
        store_particle_possitions_cb->setGeometry(QRect(20, 210, 131, 17));
        tabWidget->addTab(tab_output, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        settings_bb = new QDialogButtonBox(tab_settings);
        settings_bb->setObjectName(QString::fromUtf8("settings_bb"));
        settings_bb->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        settings_bb->setCenterButtons(false);

        horizontalLayout->addWidget(settings_bb);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget_2->addTab(tab_settings, QString());
        tab_simulation_2 = new QWidget();
        tab_simulation_2->setObjectName(QString::fromUtf8("tab_simulation_2"));
        verticalLayout_4 = new QVBoxLayout(tab_simulation_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        start_simulation_pb = new QPushButton(tab_simulation_2);
        start_simulation_pb->setObjectName(QString::fromUtf8("start_simulation_pb"));

        horizontalLayout_3->addWidget(start_simulation_pb);

        close_when_finished_cb = new QCheckBox(tab_simulation_2);
        close_when_finished_cb->setObjectName(QString::fromUtf8("close_when_finished_cb"));
        close_when_finished_cb->setEnabled(true);

        horizontalLayout_3->addWidget(close_when_finished_cb);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        simulation_output_tb = new QTextBrowser(tab_simulation_2);
        simulation_output_tb->setObjectName(QString::fromUtf8("simulation_output_tb"));

        verticalLayout_4->addWidget(simulation_output_tb);

        tabWidget_2->addTab(tab_simulation_2, QString());
        tab_plots = new QWidget();
        tab_plots->setObjectName(QString::fromUtf8("tab_plots"));
        tabWidget_2->addTab(tab_plots, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        mdmainwin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mdmainwin);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 579, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        mdmainwin->setMenuBar(menuBar);
        statusbar = new QStatusBar(mdmainwin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mdmainwin->setStatusBar(statusbar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuSettings->addAction(actionSave_Settings);
        menuSettings->addAction(actionLoad_Settings);

        retranslateUi(mdmainwin);
        QObject::connect(actionExit, SIGNAL(triggered()), mdmainwin, SLOT(close()));

        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        lattice_type_cb->setCurrentIndex(0);
        desired_pressure_unit_cb->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(mdmainwin);
    } // setupUi

    void retranslateUi(QMainWindow *mdmainwin)
    {
        mdmainwin->setWindowTitle(QApplication::translate("mdmainwin", "Computational Physics Consulting", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("mdmainwin", "Exit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("mdmainwin", "About...", 0, QApplication::UnicodeUTF8));
        actionSave_Settings->setText(QApplication::translate("mdmainwin", "Save Settings...", 0, QApplication::UnicodeUTF8));
        actionLoad_Settings->setText(QApplication::translate("mdmainwin", "Load Settings...", 0, QApplication::UnicodeUTF8));
        lattice_type_l->setText(QApplication::translate("mdmainwin", "Lattice type:", 0, QApplication::UnicodeUTF8));
        sigma_l->setText(QApplication::translate("mdmainwin", "Sigma:", 0, QApplication::UnicodeUTF8));
        epsilon_l->setText(QApplication::translate("mdmainwin", "Epsilon:", 0, QApplication::UnicodeUTF8));
        mass_l->setText(QApplication::translate("mdmainwin", "Mass:", 0, QApplication::UnicodeUTF8));
        lattice_constant_l->setText(QApplication::translate("mdmainwin", "Lattice constant:", 0, QApplication::UnicodeUTF8));
        lattice_type_cb->clear();
        lattice_type_cb->insertItems(0, QStringList()
         << QApplication::translate("mdmainwin", "SC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mdmainwin", "FCC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mdmainwin", "BCC", 0, QApplication::UnicodeUTF8)
        );
        save_element_pb->setText(QApplication::translate("mdmainwin", "Save Element...", 0, QApplication::UnicodeUTF8));
        load_element_pb->setText(QApplication::translate("mdmainwin", "Load Element...", 0, QApplication::UnicodeUTF8));
        sigma_unit_l->setText(QApplication::translate("mdmainwin", "\303\205", 0, QApplication::UnicodeUTF8));
        epsilon_unit_cb->clear();
        epsilon_unit_cb->insertItems(0, QStringList()
         << QApplication::translate("mdmainwin", "eV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mdmainwin", "erg", 0, QApplication::UnicodeUTF8)
        );
        lattice_constant_unit_l->setText(QApplication::translate("mdmainwin", "\303\205", 0, QApplication::UnicodeUTF8));
        mass_unit_l->setText(QApplication::translate("mdmainwin", "u", 0, QApplication::UnicodeUTF8));
        element_l->setText(QApplication::translate("mdmainwin", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_element), QApplication::translate("mdmainwin", "Element", 0, QApplication::UnicodeUTF8));
        init_temperature_l->setText(QApplication::translate("mdmainwin", "Initial temperature:", 0, QApplication::UnicodeUTF8));
        init_temperature_unit_l->setText(QApplication::translate("mdmainwin", "K", 0, QApplication::UnicodeUTF8));
        num_particles_l->setText(QApplication::translate("mdmainwin", "Number of particles:", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("mdmainwin", "RadioButton", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_environment), QApplication::translate("mdmainwin", "Environment", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("mdmainwin", "Constants", 0, QApplication::UnicodeUTF8));
        npe_rb->setText(QApplication::translate("mdmainwin", "NPE", 0, QApplication::UnicodeUTF8));
        nve_rb->setText(QApplication::translate("mdmainwin", "NVE", 0, QApplication::UnicodeUTF8));
        nvt_rb->setText(QApplication::translate("mdmainwin", "NVT", 0, QApplication::UnicodeUTF8));
        npt_rb->setText(QApplication::translate("mdmainwin", "NPT", 0, QApplication::UnicodeUTF8));
        constants_comment_l->setText(QApplication::translate("mdmainwin", "TextLabel", 0, QApplication::UnicodeUTF8));
        desired_pressure_l->setText(QApplication::translate("mdmainwin", "Desired pressure:", 0, QApplication::UnicodeUTF8));
        desired_temperature_l->setText(QApplication::translate("mdmainwin", "Desired temperature:", 0, QApplication::UnicodeUTF8));
        desired_pressure_unit_cb->clear();
        desired_pressure_unit_cb->insertItems(0, QStringList()
         << QApplication::translate("mdmainwin", "Pa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mdmainwin", "Bar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mdmainwin", "atm", 0, QApplication::UnicodeUTF8)
        );
        desired_temperature_unit_l->setText(QApplication::translate("mdmainwin", "K", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_control), QApplication::translate("mdmainwin", "Control", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("mdmainwin", "Leapfrog integration", 0, QApplication::UnicodeUTF8));
        time_step_unit_l->setText(QApplication::translate("mdmainwin", "fs", 0, QApplication::UnicodeUTF8));
        time_step_l->setText(QApplication::translate("mdmainwin", "Time step length:", 0, QApplication::UnicodeUTF8));
        num_time_steps_l->setText(QApplication::translate("mdmainwin", "Number of time step:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("mdmainwin", "Verlet list", 0, QApplication::UnicodeUTF8));
        inner_cutoff_l->setText(QApplication::translate("mdmainwin", "Inner cutoff:", 0, QApplication::UnicodeUTF8));
        outer_cutoff_l->setText(QApplication::translate("mdmainwin", "Outer cutoff:", 0, QApplication::UnicodeUTF8));
        inner_cutoff_unit_l->setText(QApplication::translate("mdmainwin", "times Sigma", 0, QApplication::UnicodeUTF8));
        outer_cutoff_unit_l->setText(QApplication::translate("mdmainwin", "times inner cutoff", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_simulation), QApplication::translate("mdmainwin", "Simulation", 0, QApplication::UnicodeUTF8));
        measurement_interval_l->setText(QApplication::translate("mdmainwin", "Measurement interval:", 0, QApplication::UnicodeUTF8));
        measurement_interval_timesteps_l->setText(QApplication::translate("mdmainwin", "timesteps", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("mdmainwin", "Stored properties", 0, QApplication::UnicodeUTF8));
        msd_cb->setText(QApplication::translate("mdmainwin", "MSD", 0, QApplication::UnicodeUTF8));
        energy_total_cb->setText(QApplication::translate("mdmainwin", "Energy, total", 0, QApplication::UnicodeUTF8));
        diffoceff_cb->setText(QApplication::translate("mdmainwin", "Diffusion coeff.", 0, QApplication::UnicodeUTF8));
        energy_potential_cb->setText(QApplication::translate("mdmainwin", "Energy, potential", 0, QApplication::UnicodeUTF8));
        energy_kinetic_cb->setText(QApplication::translate("mdmainwin", "Energy, kinetic", 0, QApplication::UnicodeUTF8));
        cohesive_energy_cb->setText(QApplication::translate("mdmainwin", "Cohesive energy", 0, QApplication::UnicodeUTF8));
        pressure_cb->setText(QApplication::translate("mdmainwin", "Pressure", 0, QApplication::UnicodeUTF8));
        cv_cb->setText(QApplication::translate("mdmainwin", "Cv", 0, QApplication::UnicodeUTF8));
        store_particle_possitions_cb->setText(QApplication::translate("mdmainwin", "Store particle positions", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_output), QApplication::translate("mdmainwin", "Output", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_settings), QApplication::translate("mdmainwin", "Settings", 0, QApplication::UnicodeUTF8));
        start_simulation_pb->setText(QApplication::translate("mdmainwin", "Start Simulation", 0, QApplication::UnicodeUTF8));
        close_when_finished_cb->setText(QApplication::translate("mdmainwin", "Close when finished", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_simulation_2), QApplication::translate("mdmainwin", "Simulation", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_plots), QApplication::translate("mdmainwin", "Plots", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("mdmainwin", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("mdmainwin", "Help", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("mdmainwin", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mdmainwin: public Ui_mdmainwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDMAINWIN_H
