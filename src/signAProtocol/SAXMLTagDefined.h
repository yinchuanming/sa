﻿#ifndef SAXMLTAGDEFINED_H
#define SAXMLTAGDEFINED_H
/*
<sa>
    <values>
        <group name="">
            <item type='int'>5<item>
        </group>
    </values>
</sa>
*/

/// \def 定义特殊处理的数组类型 QVariantList
#ifndef SA_XML_VAR_ARR_LIST
#define SA_XML_VAR_ARR_LIST "QVariantList"
#endif
/// \def 定义特殊处理的数组类型 QStringList
#ifndef SA_XML_VAR_ARR_STRLIST
#define SA_XML_VAR_ARR_STRLIST "QStringList"
#endif
/// \def 定义特殊处理的数组类型 QVariantMap
#ifndef SA_XML_VAR_ARR_MAP
#define SA_XML_VAR_ARR_MAP "QVariantMap"
#endif
/// \def 定义特殊处理的数组类型 QVariantHash
#ifndef SA_XML_VAR_ARR_HASH
#define SA_XML_VAR_ARR_HASH "QVariantHash"
#endif
/// \def sa打头的标签，表示这是一个sa协议
#ifndef SA_XML_TAG_SA
#define SA_XML_TAG_SA "sa"
#endif
/// \def sa打头的标签，表示这是一个sa协议
#ifndef SA_XML_TAG_VALUES
#define SA_XML_TAG_VALUES "values"
#endif
/// \def int val int型数据
#ifndef SA_XML_TAG_INTVAL
#define SA_XML_TAG_INTVAL "intVal"
#endif
/// \def uint val uint型数据
#ifndef SA_XML_TAG_UINTVAL
#define SA_XML_TAG_UINTVAL "uintVal"
#endif
/// \def quintptr型数据
#ifndef SA_XML_TAG_QUINTPTR
#define SA_XML_TAG_QUINTPTR "quintptrVal"
#endif

/// \def <sa>的属性类型名<sa type="xxx">
#ifndef SA_XML_ATT_NAME_SA_TYPE
#define SA_XML_ATT_NAME_SA_TYPE "type"
#endif
///
/// \def <sa>的属性类型名<sa type="xxx">中的xxx定义
/// 处理VectorPointF的返回
///
#ifndef ATT_SA_TYPE_VPFR
#define ATT_SA_TYPE_VPFR "vpfr"
#endif
/// \def header标签 用于标记sa的header
#ifndef SA_XML_TAG_HEADER_ROOT
#define SA_XML_TAG_HEADER_ROOT "header"
#endif
/// \def Content标签 用于标记sa的Content
#ifndef SA_XML_TAG_CONTENT_ROOT
#define SA_XML_TAG_CONTENT_ROOT "content"
#endif
/// \def dfi标签 用于标记一次VectorPointF的处理结果
#ifndef SA_XML_TAG_DFI_ROOT
#define SA_XML_TAG_DFI_ROOT "dfi"
#endif
/// \def group标签 用于标记一组项目
#ifndef SA_XML_TAG_GROUP
#define SA_XML_TAG_GROUP "group"
#endif
/// \def item标签 用于标记一个项目
#ifndef SA_XML_TAG_ITEM
#define SA_XML_TAG_ITEM "item"
#endif

/// \def type属性标签 用于描述属性"type"
#ifndef SA_XML_ATT_TYPE
#define SA_XML_ATT_TYPE "type"
#endif
/// \def type属性标签对应的值：string
#ifndef ATT_TYPE_STRING
#define ATT_TYPE_STRING "string"
#endif
/// \def type属性标签对应的值：int
#ifndef ATT_TYPE_INT
#define ATT_TYPE_INT "int"
#endif
/// \def type属性标签对应的值：variant
#ifndef ATT_TYPE_VARIANT
#define ATT_TYPE_VARIANT "variant"
#endif
/// \def type属性标签对应的值：vectorpointf
#ifndef ATT_TYPE_VECTORPOINTF
#define ATT_TYPE_VECTORPOINTF "vectorpointf-value"
#endif
/// \def type属性标签对应的值：vectorpointf
#ifndef ATT_TYPE_VECTORPOINT
#define ATT_TYPE_VECTORPOINT "vectorpoint-value"
#endif
/// \def name属性标签 用于描述属性"name"
#ifndef SA_XML_ATT_NAME
#define SA_XML_ATT_NAME "name"
#endif

/// \def varType属性标签 用于描述属性"varType"
#ifndef SA_XML_ATT_VALUE_TYPE
#define SA_XML_ATT_VALUE_TYPE "varType"
#endif

/// \def varType属性标签值vectorpointf,标识点序列的数值
#ifndef SA_XML_ATT_VALUE_TYPE_VECTORPOINTF
#define SA_XML_ATT_VALUE_TYPE_VECTORPOINTF "vectorpointf"
#endif

/// \def val属性标签 用于描述属性"val"
#ifndef SA_XML_ATT_VALUE
#define SA_XML_ATT_VALUE "val"
#endif




namespace SA_XML {
    enum ProtocolType
    {
        UnknowType
        ,TypeVectorPointFProcessResult ///< 线性数组处理结果返回
    };
}













#endif // SAXMLTAGDEFINED_H