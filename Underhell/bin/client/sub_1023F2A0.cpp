_DWORD *__thiscall sub_1023F2A0(void *this, char *Source, int a3, int a4)
{
  _DWORD *result; // eax
  int v5; // ebp
  char *v6; // edi
  unsigned int v7; // kr00_4
  int v8; // eax
  _BYTE v9[4]; // [esp+8h] [ebp-10h] BYREF
  char *v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  result = sub_1023AFC0(this, Source);
  v5 = (int)result;
  if ( result )
  {
    v9[0] = 0;
    if ( Source )
    {
      v7 = strlen(Source);
      v6 = (char *)sub_100DDA40(v7 + 1);
      sub_102282F0(v6, Source, v7 + 1);
    }
    else
    {
      v6 = 0;
    }
    v12 = a4;
    v11 = a3;
    v8 = *(_DWORD *)(v5 + 60);
    v10 = v6;
    sub_1023CDE0((int *)(v5 + 48), v8, (int)v9);
    return (_DWORD *)sub_10034930((int)v6);
  }
  return result;
}
