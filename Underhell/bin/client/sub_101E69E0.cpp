int __thiscall sub_101E69E0(int *this, char *SubStr, char *String2)
{
  int *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // esi
  Concurrency::details::VirtualProcessor *v8; // eax
  Concurrency::details::VirtualProcessor *v9; // edi
  int v10; // ebx
  unsigned __int8 *v11; // eax
  char *v12; // esi
  const char *v13; // eax
  int result; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]

  v3 = this;
  v4 = 0;
  v16 = 0;
  if ( this[9] <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = v3[6];
    v6 = *(_DWORD *)(v5 + 4 * v4);
    if ( v6 )
    {
      v7 = 0;
      v15 = 0;
      if ( sub_101EA900(*(_DWORD *)(v5 + 4 * v4)) > 0 )
        break;
    }
LABEL_14:
    v16 = ++v4;
    if ( v4 >= v3[9] )
      return 0;
  }
  while ( 1 )
  {
    v8 = (Concurrency::details::VirtualProcessor *)sub_101EA910(v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = 0;
      if ( (int)Concurrency::details::VirtualProcessor::GetMaskId(v8) > 0 )
        break;
    }
LABEL_12:
    v15 = ++v7;
    if ( v7 >= sub_101EA900(v6) )
    {
      v4 = v16;
      v3 = this;
      goto LABEL_14;
    }
  }
  while ( 1 )
  {
    v11 = (unsigned __int8 *)sub_101EAE80(v10);
    v12 = (char *)v11;
    if ( v11 )
    {
      if ( sub_101E1B20(v11) == 5 )
      {
        v13 = (const char *)sub_101E1B90(v12);
        if ( strstr(v13, SubStr) )
        {
          result = sub_101E2CB0(v12, String2);
          if ( result )
            return result;
        }
      }
    }
    if ( ++v10 >= (int)Concurrency::details::VirtualProcessor::GetMaskId(v9) )
    {
      v7 = v15;
      goto LABEL_12;
    }
  }
}
