/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#include "QmlZdigest.h"


///
//  Add buffer into digest calculation
void QmlZdigest::update (const byte *buffer, size_t length) {
    zdigest_update (self, buffer, length);
};

///
//  Return final digest hash data. If built without crypto support,
//  returns NULL.                                                  
const byte *QmlZdigest::data () {
    return zdigest_data (self);
};

///
//  Return final digest hash size
size_t QmlZdigest::size () {
    return zdigest_size (self);
};

///
//  Return digest as printable hex string; caller should not modify nor   
//  free this string. After calling this, you may not use zdigest_update()
//  on the same digest. If built without crypto support, returns NULL.    
const QString QmlZdigest::string () {
    return QString (zdigest_string (self));
};


QObject* QmlZdigest::qmlAttachedProperties(QObject* object) {
    return new QmlZdigestAttached(object);
}


///
//  Self test of this class.
void QmlZdigestAttached::test (bool verbose) {
    zdigest_test (verbose);
};

///
//  Constructor - creates new digest object, which you use to build up a
//  digest by repeatedly calling zdigest_update() on chunks of data.    
QmlZdigest *QmlZdigestAttached::construct () {
    QmlZdigest *qmlSelf = new QmlZdigest ();
    qmlSelf->self = zdigest_new ();
    return qmlSelf;
};

///
//  Destroy a digest object
void QmlZdigestAttached::destruct (QmlZdigest *qmlSelf) {
    zdigest_destroy (&qmlSelf->self);
};

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
