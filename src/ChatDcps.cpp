//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ChatDcps.cpp
//  Source: ChatDcps.idl
//  Generated: Sat Jun  4 21:35:03 2016
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "ChatDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < Chat::NamedMessage, struct NamedMessageSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < Chat::NameService, struct NameServiceSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < Chat::ChatMessage, struct ChatMessageSeq_uniq_>;
#endif

const char * Chat::ChatMessageTypeSupportInterface::_local_id = "IDL:Chat/ChatMessageTypeSupportInterface:1.0";

Chat::ChatMessageTypeSupportInterface_ptr Chat::ChatMessageTypeSupportInterface::_duplicate (Chat::ChatMessageTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::ChatMessageTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::ChatMessageTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::ChatMessageTypeSupportInterface_ptr Chat::ChatMessageTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (Chat::ChatMessageTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < Chat::ChatMessageTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::ChatMessageTypeSupportInterface_ptr Chat::ChatMessageTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageTypeSupportInterface_ptr result;
   result = dynamic_cast < Chat::ChatMessageTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::ChatMessageDataWriter::_local_id = "IDL:Chat/ChatMessageDataWriter:1.0";

Chat::ChatMessageDataWriter_ptr Chat::ChatMessageDataWriter::_duplicate (Chat::ChatMessageDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::ChatMessageDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::ChatMessageDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::ChatMessageDataWriter_ptr Chat::ChatMessageDataWriter::_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageDataWriter_ptr result = NULL;
   if (p && p->_is_a (Chat::ChatMessageDataWriter::_local_id))
   {
      result = dynamic_cast < Chat::ChatMessageDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::ChatMessageDataWriter_ptr Chat::ChatMessageDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageDataWriter_ptr result;
   result = dynamic_cast < Chat::ChatMessageDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::ChatMessageDataReader::_local_id = "IDL:Chat/ChatMessageDataReader:1.0";

Chat::ChatMessageDataReader_ptr Chat::ChatMessageDataReader::_duplicate (Chat::ChatMessageDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::ChatMessageDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::ChatMessageDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::ChatMessageDataReader_ptr Chat::ChatMessageDataReader::_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageDataReader_ptr result = NULL;
   if (p && p->_is_a (Chat::ChatMessageDataReader::_local_id))
   {
      result = dynamic_cast < Chat::ChatMessageDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::ChatMessageDataReader_ptr Chat::ChatMessageDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageDataReader_ptr result;
   result = dynamic_cast < Chat::ChatMessageDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::ChatMessageDataReaderView::_local_id = "IDL:Chat/ChatMessageDataReaderView:1.0";

Chat::ChatMessageDataReaderView_ptr Chat::ChatMessageDataReaderView::_duplicate (Chat::ChatMessageDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::ChatMessageDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::ChatMessageDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::ChatMessageDataReaderView_ptr Chat::ChatMessageDataReaderView::_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageDataReaderView_ptr result = NULL;
   if (p && p->_is_a (Chat::ChatMessageDataReaderView::_local_id))
   {
      result = dynamic_cast < Chat::ChatMessageDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::ChatMessageDataReaderView_ptr Chat::ChatMessageDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::ChatMessageDataReaderView_ptr result;
   result = dynamic_cast < Chat::ChatMessageDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NameServiceTypeSupportInterface::_local_id = "IDL:Chat/NameServiceTypeSupportInterface:1.0";

Chat::NameServiceTypeSupportInterface_ptr Chat::NameServiceTypeSupportInterface::_duplicate (Chat::NameServiceTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NameServiceTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NameServiceTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NameServiceTypeSupportInterface_ptr Chat::NameServiceTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (Chat::NameServiceTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < Chat::NameServiceTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NameServiceTypeSupportInterface_ptr Chat::NameServiceTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceTypeSupportInterface_ptr result;
   result = dynamic_cast < Chat::NameServiceTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NameServiceDataWriter::_local_id = "IDL:Chat/NameServiceDataWriter:1.0";

Chat::NameServiceDataWriter_ptr Chat::NameServiceDataWriter::_duplicate (Chat::NameServiceDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NameServiceDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NameServiceDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NameServiceDataWriter_ptr Chat::NameServiceDataWriter::_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceDataWriter_ptr result = NULL;
   if (p && p->_is_a (Chat::NameServiceDataWriter::_local_id))
   {
      result = dynamic_cast < Chat::NameServiceDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NameServiceDataWriter_ptr Chat::NameServiceDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceDataWriter_ptr result;
   result = dynamic_cast < Chat::NameServiceDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NameServiceDataReader::_local_id = "IDL:Chat/NameServiceDataReader:1.0";

Chat::NameServiceDataReader_ptr Chat::NameServiceDataReader::_duplicate (Chat::NameServiceDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NameServiceDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NameServiceDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NameServiceDataReader_ptr Chat::NameServiceDataReader::_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceDataReader_ptr result = NULL;
   if (p && p->_is_a (Chat::NameServiceDataReader::_local_id))
   {
      result = dynamic_cast < Chat::NameServiceDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NameServiceDataReader_ptr Chat::NameServiceDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceDataReader_ptr result;
   result = dynamic_cast < Chat::NameServiceDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NameServiceDataReaderView::_local_id = "IDL:Chat/NameServiceDataReaderView:1.0";

Chat::NameServiceDataReaderView_ptr Chat::NameServiceDataReaderView::_duplicate (Chat::NameServiceDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NameServiceDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NameServiceDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NameServiceDataReaderView_ptr Chat::NameServiceDataReaderView::_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceDataReaderView_ptr result = NULL;
   if (p && p->_is_a (Chat::NameServiceDataReaderView::_local_id))
   {
      result = dynamic_cast < Chat::NameServiceDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NameServiceDataReaderView_ptr Chat::NameServiceDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NameServiceDataReaderView_ptr result;
   result = dynamic_cast < Chat::NameServiceDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NamedMessageTypeSupportInterface::_local_id = "IDL:Chat/NamedMessageTypeSupportInterface:1.0";

Chat::NamedMessageTypeSupportInterface_ptr Chat::NamedMessageTypeSupportInterface::_duplicate (Chat::NamedMessageTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NamedMessageTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NamedMessageTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NamedMessageTypeSupportInterface_ptr Chat::NamedMessageTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (Chat::NamedMessageTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < Chat::NamedMessageTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NamedMessageTypeSupportInterface_ptr Chat::NamedMessageTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageTypeSupportInterface_ptr result;
   result = dynamic_cast < Chat::NamedMessageTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NamedMessageDataWriter::_local_id = "IDL:Chat/NamedMessageDataWriter:1.0";

Chat::NamedMessageDataWriter_ptr Chat::NamedMessageDataWriter::_duplicate (Chat::NamedMessageDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NamedMessageDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NamedMessageDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NamedMessageDataWriter_ptr Chat::NamedMessageDataWriter::_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageDataWriter_ptr result = NULL;
   if (p && p->_is_a (Chat::NamedMessageDataWriter::_local_id))
   {
      result = dynamic_cast < Chat::NamedMessageDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NamedMessageDataWriter_ptr Chat::NamedMessageDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageDataWriter_ptr result;
   result = dynamic_cast < Chat::NamedMessageDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NamedMessageDataReader::_local_id = "IDL:Chat/NamedMessageDataReader:1.0";

Chat::NamedMessageDataReader_ptr Chat::NamedMessageDataReader::_duplicate (Chat::NamedMessageDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NamedMessageDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NamedMessageDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NamedMessageDataReader_ptr Chat::NamedMessageDataReader::_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageDataReader_ptr result = NULL;
   if (p && p->_is_a (Chat::NamedMessageDataReader::_local_id))
   {
      result = dynamic_cast < Chat::NamedMessageDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NamedMessageDataReader_ptr Chat::NamedMessageDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageDataReader_ptr result;
   result = dynamic_cast < Chat::NamedMessageDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * Chat::NamedMessageDataReaderView::_local_id = "IDL:Chat/NamedMessageDataReaderView:1.0";

Chat::NamedMessageDataReaderView_ptr Chat::NamedMessageDataReaderView::_duplicate (Chat::NamedMessageDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean Chat::NamedMessageDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, Chat::NamedMessageDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

Chat::NamedMessageDataReaderView_ptr Chat::NamedMessageDataReaderView::_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageDataReaderView_ptr result = NULL;
   if (p && p->_is_a (Chat::NamedMessageDataReaderView::_local_id))
   {
      result = dynamic_cast < Chat::NamedMessageDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

Chat::NamedMessageDataReaderView_ptr Chat::NamedMessageDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   Chat::NamedMessageDataReaderView_ptr result;
   result = dynamic_cast < Chat::NamedMessageDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}


