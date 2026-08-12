int *__thiscall sub_101FC160(int *this, int a2)
{
  int *result; // eax
  int v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // ebp
  const char *v7; // eax
  int *v8; // esi
  int v9; // edi
  _DWORD *v10; // eax
  char *v11; // eax
  int v12; // edx
  int v13; // esi
  void *v14; // eax
  int v15; // eax
  int i; // [esp+14h] [ebp-4h]

  result = sub_101F6F30("children");
  v3 = result[3];
  v4 = 0;
  for ( i = v3; v4 < v3; ++v4 )
  {
    v5 = (_DWORD *)sub_102AA770("child");
    if ( v5 )
    {
      if ( *v5 == 1 )
      {
        result = (int *)v5[2];
      }
      else
      {
        dword_10465844 = 0;
        result = &dword_10465844;
      }
    }
    else
    {
      dword_1046584C = 0;
      result = &dword_1046584C;
    }
    v6 = *result;
    if ( *result )
    {
      v7 = (const char *)sub_102AA3C0(*result);
      result = (int *)_stricmp(v7, "DmeParticleSystemDefinition");
      if ( !result )
      {
        v8 = this + 172;
        v9 = 40 * sub_101FBBE0(this + 172, this[175]);
        sub_102AA7D0(v9 + this[172], dword_10465720);
        v10 = (_DWORD *)sub_102AA770("preventNameBasedLookup");
        if ( v10 )
        {
          if ( *v10 == 4 )
          {
            v11 = (char *)v10[2];
          }
          else
          {
            byte_10465840 = 0;
            v11 = &byte_10465840;
          }
        }
        else
        {
          byte_10465848 = 0;
          v11 = &byte_10465848;
        }
        *(_BYTE *)(v9 + *v8 + 32) = *v11 == 0;
        v12 = *v8;
        v13 = v9 + *v8;
        if ( *(_BYTE *)(v9 + v12 + 32) )
        {
          v14 = (void *)sub_102AAB30(v6);
          sub_1022D0A0(v14);
        }
        else
        {
          v15 = sub_102AA400(v6);
          sub_10233090(v15, v13);
        }
        result = (int *)sub_101FDAC0(v6);
        v3 = i;
      }
    }
  }
  return result;
}
