void __thiscall sub_1017E170(int *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // esi
  int i; // ebx
  const char *v7; // eax
  const char **v8; // [esp+Ch] [ebp+8h]
  int v9; // [esp+Ch] [ebp+8h]
  int v10; // [esp+Ch] [ebp+8h]
  int v11; // [esp+Ch] [ebp+8h]
  int v12; // [esp+Ch] [ebp+8h]

  if ( a2 )
  {
    v3 = this + 701;
    v4 = sub_1017DCC0(this + 701, this[704]);
    if ( v4 != -1 )
    {
      v5 = 20 * v4;
      v8 = (const char **)(20 * v4 + *v3);
      *v8 = sub_1012D330(a2, "name", 0);
      v9 = v5 + *v3;
      *(_DWORD *)(v9 + 4) = sub_1012D330(a2, "sequence", 0);
      v10 = v5 + *v3;
      *(_DWORD *)(v10 + 8) = sub_1012D330(a2, "activity", 0);
      v11 = v5 + *v3;
      *(_BYTE *)(v11 + 16) = sub_1022A800("default", 0) == 1;
      for ( i = sub_10229C90(a2); i; i = sub_1021F0F0(i) )
      {
        v7 = (const char *)sub_10229A00(i);
        if ( !_stricmp(v7, "pose_parameters") )
        {
          v12 = v5 + *v3;
          *(_DWORD *)(v12 + 12) = sub_1022AD00(i);
        }
      }
    }
  }
}
