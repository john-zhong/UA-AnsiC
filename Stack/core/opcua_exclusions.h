/* Copyright (c) 1996-2017, OPC Foundation. All rights reserved.

   The source code in this file is covered under a dual-license scenario:
     - RCL: for OPC Foundation members in good-standing
     - GPL V2: everybody else

   RCL license terms accompanied with this source code. See http://opcfoundation.org/License/RCL/1.00/

   GNU General Public License as published by the Free Software Foundation;
   version 2 of the License are accompanied with this source code. See http://opcfoundation.org/License/GPLv2

   This source code is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#ifndef _OpcUa_Exclusions_H_
#define _OpcUa_Exclusions_H_ 1


/*============================================================================
* Service Exclusions
 *===========================================================================*/
/* #define OPCUA_EXCLUDE_FindServers */
/* #define OPCUA_EXCLUDE_FindServersOnNetwork */
/* #define OPCUA_EXCLUDE_GetEndpoints */
/* #define OPCUA_EXCLUDE_RegisterServer */
/* #define OPCUA_EXCLUDE_RegisterServer2 */
/* #define OPCUA_EXCLUDE_OpenSecureChannel */
/* #define OPCUA_EXCLUDE_CloseSecureChannel */
/* #define OPCUA_EXCLUDE_CreateSession */
/* #define OPCUA_EXCLUDE_ActivateSession */
/* #define OPCUA_EXCLUDE_CloseSession */
/* #define OPCUA_EXCLUDE_Cancel */
/* #define OPCUA_EXCLUDE_AddNodes */
/* #define OPCUA_EXCLUDE_AddReferences */
/* #define OPCUA_EXCLUDE_DeleteNodes */
/* #define OPCUA_EXCLUDE_DeleteReferences */
/* #define OPCUA_EXCLUDE_Browse */
/* #define OPCUA_EXCLUDE_BrowseNext */
/* #define OPCUA_EXCLUDE_TranslateBrowsePathsToNodeIds */
/* #define OPCUA_EXCLUDE_RegisterNodes */
/* #define OPCUA_EXCLUDE_UnregisterNodes */
/* #define OPCUA_EXCLUDE_QueryFirst */
/* #define OPCUA_EXCLUDE_QueryNext */
/* #define OPCUA_EXCLUDE_Read */
/* #define OPCUA_EXCLUDE_HistoryRead */
/* #define OPCUA_EXCLUDE_Write */
/* #define OPCUA_EXCLUDE_HistoryUpdate */
/* #define OPCUA_EXCLUDE_Call */
/* #define OPCUA_EXCLUDE_CreateMonitoredItems */
/* #define OPCUA_EXCLUDE_ModifyMonitoredItems */
/* #define OPCUA_EXCLUDE_SetMonitoringMode */
/* #define OPCUA_EXCLUDE_SetTriggering */
/* #define OPCUA_EXCLUDE_DeleteMonitoredItems */
/* #define OPCUA_EXCLUDE_CreateSubscription */
/* #define OPCUA_EXCLUDE_ModifySubscription */
/* #define OPCUA_EXCLUDE_SetPublishingMode */
/* #define OPCUA_EXCLUDE_Publish */
/* #define OPCUA_EXCLUDE_Republish */
/* #define OPCUA_EXCLUDE_TransferSubscriptions */
/* #define OPCUA_EXCLUDE_DeleteSubscriptions */

/*============================================================================
* DataType Exclusions
 *===========================================================================*/
/* #define OPCUA_EXCLUDE_TrustListDataType */
/* #define OPCUA_EXCLUDE_Node */
/* #define OPCUA_EXCLUDE_InstanceNode */
/* #define OPCUA_EXCLUDE_TypeNode */
/* #define OPCUA_EXCLUDE_ObjectNode */
/* #define OPCUA_EXCLUDE_ObjectTypeNode */
/* #define OPCUA_EXCLUDE_VariableNode */
/* #define OPCUA_EXCLUDE_VariableTypeNode */
/* #define OPCUA_EXCLUDE_ReferenceTypeNode */
/* #define OPCUA_EXCLUDE_MethodNode */
/* #define OPCUA_EXCLUDE_ViewNode */
/* #define OPCUA_EXCLUDE_DataTypeNode */
/* #define OPCUA_EXCLUDE_ReferenceNode */
/* #define OPCUA_EXCLUDE_Argument */
/* #define OPCUA_EXCLUDE_EnumValueType */
/* #define OPCUA_EXCLUDE_OptionSet */
/* #define OPCUA_EXCLUDE_Union */
/* #define OPCUA_EXCLUDE_TimeZoneDataType */
/* #define OPCUA_EXCLUDE_ApplicationDescription */
/* #define OPCUA_EXCLUDE_RequestHeader */
/* #define OPCUA_EXCLUDE_ResponseHeader */
/* #define OPCUA_EXCLUDE_ServiceFault */
/* #define OPCUA_EXCLUDE_ServerOnNetwork */
/* #define OPCUA_EXCLUDE_UserTokenPolicy */
/* #define OPCUA_EXCLUDE_EndpointDescription */
/* #define OPCUA_EXCLUDE_RegisteredServer */
/* #define OPCUA_EXCLUDE_DiscoveryConfiguration */
/* #define OPCUA_EXCLUDE_MdnsDiscoveryConfiguration */
/* #define OPCUA_EXCLUDE_ChannelSecurityToken */
/* #define OPCUA_EXCLUDE_SignedSoftwareCertificate */
/* #define OPCUA_EXCLUDE_SignatureData */
/* #define OPCUA_EXCLUDE_UserIdentityToken */
/* #define OPCUA_EXCLUDE_AnonymousIdentityToken */
/* #define OPCUA_EXCLUDE_UserNameIdentityToken */
/* #define OPCUA_EXCLUDE_X509IdentityToken */
/* #define OPCUA_EXCLUDE_IssuedIdentityToken */
/* #define OPCUA_EXCLUDE_NodeAttributes */
/* #define OPCUA_EXCLUDE_ObjectAttributes */
/* #define OPCUA_EXCLUDE_VariableAttributes */
/* #define OPCUA_EXCLUDE_MethodAttributes */
/* #define OPCUA_EXCLUDE_ObjectTypeAttributes */
/* #define OPCUA_EXCLUDE_VariableTypeAttributes */
/* #define OPCUA_EXCLUDE_ReferenceTypeAttributes */
/* #define OPCUA_EXCLUDE_DataTypeAttributes */
/* #define OPCUA_EXCLUDE_ViewAttributes */
/* #define OPCUA_EXCLUDE_AddNodesItem */
/* #define OPCUA_EXCLUDE_AddNodesResult */
/* #define OPCUA_EXCLUDE_AddReferencesItem */
/* #define OPCUA_EXCLUDE_DeleteNodesItem */
/* #define OPCUA_EXCLUDE_DeleteReferencesItem */
/* #define OPCUA_EXCLUDE_ViewDescription */
/* #define OPCUA_EXCLUDE_BrowseDescription */
/* #define OPCUA_EXCLUDE_ReferenceDescription */
/* #define OPCUA_EXCLUDE_BrowseResult */
/* #define OPCUA_EXCLUDE_RelativePathElement */
/* #define OPCUA_EXCLUDE_RelativePath */
/* #define OPCUA_EXCLUDE_BrowsePath */
/* #define OPCUA_EXCLUDE_BrowsePathTarget */
/* #define OPCUA_EXCLUDE_BrowsePathResult */
/* #define OPCUA_EXCLUDE_EndpointConfiguration */
/* #define OPCUA_EXCLUDE_QueryDataDescription */
/* #define OPCUA_EXCLUDE_NodeTypeDescription */
/* #define OPCUA_EXCLUDE_QueryDataSet */
/* #define OPCUA_EXCLUDE_NodeReference */
/* #define OPCUA_EXCLUDE_ContentFilterElement */
/* #define OPCUA_EXCLUDE_ContentFilter */
/* #define OPCUA_EXCLUDE_FilterOperand */
/* #define OPCUA_EXCLUDE_ElementOperand */
/* #define OPCUA_EXCLUDE_LiteralOperand */
/* #define OPCUA_EXCLUDE_AttributeOperand */
/* #define OPCUA_EXCLUDE_SimpleAttributeOperand */
/* #define OPCUA_EXCLUDE_ContentFilterElementResult */
/* #define OPCUA_EXCLUDE_ContentFilterResult */
/* #define OPCUA_EXCLUDE_ParsingResult */
/* #define OPCUA_EXCLUDE_ReadValueId */
/* #define OPCUA_EXCLUDE_HistoryReadValueId */
/* #define OPCUA_EXCLUDE_HistoryReadResult */
/* #define OPCUA_EXCLUDE_HistoryReadDetails */
/* #define OPCUA_EXCLUDE_ReadEventDetails */
/* #define OPCUA_EXCLUDE_ReadRawModifiedDetails */
/* #define OPCUA_EXCLUDE_ReadProcessedDetails */
/* #define OPCUA_EXCLUDE_ReadAtTimeDetails */
/* #define OPCUA_EXCLUDE_HistoryData */
/* #define OPCUA_EXCLUDE_ModificationInfo */
/* #define OPCUA_EXCLUDE_HistoryModifiedData */
/* #define OPCUA_EXCLUDE_HistoryEvent */
/* #define OPCUA_EXCLUDE_WriteValue */
/* #define OPCUA_EXCLUDE_HistoryUpdateDetails */
/* #define OPCUA_EXCLUDE_UpdateDataDetails */
/* #define OPCUA_EXCLUDE_UpdateStructureDataDetails */
/* #define OPCUA_EXCLUDE_UpdateEventDetails */
/* #define OPCUA_EXCLUDE_DeleteRawModifiedDetails */
/* #define OPCUA_EXCLUDE_DeleteAtTimeDetails */
/* #define OPCUA_EXCLUDE_DeleteEventDetails */
/* #define OPCUA_EXCLUDE_HistoryUpdateResult */
/* #define OPCUA_EXCLUDE_CallMethodRequest */
/* #define OPCUA_EXCLUDE_CallMethodResult */
/* #define OPCUA_EXCLUDE_MonitoringFilter */
/* #define OPCUA_EXCLUDE_DataChangeFilter */
/* #define OPCUA_EXCLUDE_EventFilter */
/* #define OPCUA_EXCLUDE_AggregateConfiguration */
/* #define OPCUA_EXCLUDE_AggregateFilter */
/* #define OPCUA_EXCLUDE_MonitoringFilterResult */
/* #define OPCUA_EXCLUDE_EventFilterResult */
/* #define OPCUA_EXCLUDE_AggregateFilterResult */
/* #define OPCUA_EXCLUDE_MonitoringParameters */
/* #define OPCUA_EXCLUDE_MonitoredItemCreateRequest */
/* #define OPCUA_EXCLUDE_MonitoredItemCreateResult */
/* #define OPCUA_EXCLUDE_MonitoredItemModifyRequest */
/* #define OPCUA_EXCLUDE_MonitoredItemModifyResult */
/* #define OPCUA_EXCLUDE_NotificationMessage */
/* #define OPCUA_EXCLUDE_NotificationData */
/* #define OPCUA_EXCLUDE_DataChangeNotification */
/* #define OPCUA_EXCLUDE_MonitoredItemNotification */
/* #define OPCUA_EXCLUDE_EventNotificationList */
/* #define OPCUA_EXCLUDE_EventFieldList */
/* #define OPCUA_EXCLUDE_HistoryEventFieldList */
/* #define OPCUA_EXCLUDE_StatusChangeNotification */
/* #define OPCUA_EXCLUDE_SubscriptionAcknowledgement */
/* #define OPCUA_EXCLUDE_TransferResult */
/* #define OPCUA_EXCLUDE_BuildInfo */
/* #define OPCUA_EXCLUDE_RedundantServerDataType */
/* #define OPCUA_EXCLUDE_EndpointUrlListDataType */
/* #define OPCUA_EXCLUDE_NetworkGroupDataType */
/* #define OPCUA_EXCLUDE_SamplingIntervalDiagnosticsDataType */
/* #define OPCUA_EXCLUDE_ServerDiagnosticsSummaryDataType */
/* #define OPCUA_EXCLUDE_ServerStatusDataType */
/* #define OPCUA_EXCLUDE_SessionDiagnosticsDataType */
/* #define OPCUA_EXCLUDE_SessionSecurityDiagnosticsDataType */
/* #define OPCUA_EXCLUDE_ServiceCounterDataType */
/* #define OPCUA_EXCLUDE_StatusResult */
/* #define OPCUA_EXCLUDE_SubscriptionDiagnosticsDataType */
/* #define OPCUA_EXCLUDE_ModelChangeStructureDataType */
/* #define OPCUA_EXCLUDE_SemanticChangeStructureDataType */
/* #define OPCUA_EXCLUDE_Range */
/* #define OPCUA_EXCLUDE_EUInformation */
/* #define OPCUA_EXCLUDE_ComplexNumberType */
/* #define OPCUA_EXCLUDE_DoubleComplexNumberType */
/* #define OPCUA_EXCLUDE_AxisInformation */
/* #define OPCUA_EXCLUDE_XVType */
/* #define OPCUA_EXCLUDE_ProgramDiagnosticDataType */
/* #define OPCUA_EXCLUDE_Annotation */

#endif /* _OpcUa_Exclusions_H_ */
/* This is the last line of an autogenerated file. */
