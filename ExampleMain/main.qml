import QtQuick 2.2
import QtQuick.Window 2.1
import com.example.ExampleComponents 1.0

Window {
    visible: true
    width: 360
    height: 360

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    MyComponent {
    }

    Text {
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
}
