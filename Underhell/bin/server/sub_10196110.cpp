int __thiscall sub_10196110(_DWORD *this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int *v12; // eax
  char String2[256]; // [esp+8h] [ebp-10Ch] BYREF
  int v14; // [esp+108h] [ebp-Ch]
  unsigned __int16 v15; // [esp+10Ch] [ebp-8h] BYREF
  unsigned __int16 v16; // [esp+110h] [ebp-4h] BYREF

  v2 = a2;
  (**(void (__thiscall ***)(int, unsigned __int16 *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v16, 2, a2);
  result = 0;
  this[3] = 0;
  v14 = 0;
  if ( v16 )
  {
    while ( 1 )
    {
      (**(void (__thiscall ***)(int, unsigned __int16 *, int, int))(dword_106B31D8 + 4))(
        dword_106B31D8 + 4,
        &v15,
        2,
        v2);
      (**(void (__thiscall ***)(int, char *, _DWORD, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, String2, v15, v2);
      v5 = sub_1019DC10(String2);
      if ( v5 )
      {
        v6 = this[3];
        v7 = 0;
        if ( v6 <= 0 )
          goto LABEL_11;
        v8 = (_DWORD *)*this;
        while ( *v8 != v5 )
        {
          ++v7;
          ++v8;
          if ( v7 >= v6 )
            goto LABEL_11;
        }
        if ( v7 < 0 )
        {
LABEL_11:
          v9 = this[1];
          if ( v6 + 1 > v9 )
            sub_102ABFC0(v6 - v9 + 1);
          ++this[3];
          v10 = (_DWORD *)*this;
          v11 = this[3] - v6 - 1;
          this[4] = *this;
          if ( v11 > 0 )
            memcpy(&v10[v6 + 1], &v10[v6], 4 * v11);
          v12 = (int *)(*this + 4 * v6);
          if ( v12 )
            *v12 = v5;
        }
      }
      result = v14 + 1;
      v14 = result;
      if ( result >= v16 )
        break;
      v2 = a2;
    }
  }
  return result;
}
