int *__thiscall sub_10428350(int *this, int a2)
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

  result = sub_10427C30("children");
  v3 = result[3];
  v4 = 0;
  for ( i = v3; v4 < v3; ++v4 )
  {
    v5 = (_DWORD *)sub_1044A4D0("child");
    if ( v5 )
    {
      if ( *v5 == 1 )
      {
        result = (int *)v5[2];
      }
      else
      {
        dword_106FDBD4 = 0;
        result = &dword_106FDBD4;
      }
    }
    else
    {
      dword_106FDBDC = 0;
      result = &dword_106FDBDC;
    }
    v6 = *result;
    if ( *result )
    {
      v7 = (const char *)sub_1044A120(*result);
      result = (int *)_stricmp(v7, "DmeParticleSystemDefinition");
      if ( !result )
      {
        v8 = this + 172;
        v9 = 40 * sub_104280C0(this + 172, this[175]);
        sub_1044A530(v9 + this[172], dword_106FDAB0);
        v10 = (_DWORD *)sub_1044A4D0("preventNameBasedLookup");
        if ( v10 )
        {
          if ( *v10 == 4 )
          {
            v11 = (char *)v10[2];
          }
          else
          {
            byte_106FDBD0 = 0;
            v11 = &byte_106FDBD0;
          }
        }
        else
        {
          byte_106FDBD8 = 0;
          v11 = &byte_106FDBD8;
        }
        *(_BYTE *)(v9 + *v8 + 32) = *v11 == 0;
        v12 = *v8;
        v13 = v9 + *v8;
        if ( *(_BYTE *)(v9 + v12 + 32) )
        {
          v14 = (void *)sub_1044A890(v6);
          sub_10431100(v14);
        }
        else
        {
          v15 = sub_1044A160(v6);
          sub_104332E0(v15, v13);
        }
        result = (int *)sub_10428BC0(v6);
        v3 = i;
      }
    }
  }
  return result;
}
