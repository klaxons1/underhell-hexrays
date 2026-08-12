int sub_1010EB30()
{
  if ( (dword_10437328 & 1) == 0 )
  {
    dword_10437328 |= 1u;
    sub_1009AED0((int)&unk_104371C0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104371FC, (int)"baseclass", 0, 0, (int)off_103E2F0C, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10437238, (int)"m_boneIndexAttached", 2784, 4, 0, 0);
    sub_1009AED0((int)&unk_10437274, (int)"m_ragdollAttachedObjectIndex", 2780, 4, 0, 0);
    sub_1009AC90((int)&unk_104372B0, (int)"m_attachmentPointBoneSpace", 2744, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104372EC, (int)"m_attachmentPointRagdollSpace", 2768, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_104373B4, (int)&unk_104371FC, 5, (int)"DT_Ragdoll_Attached");
  return 1;
}
