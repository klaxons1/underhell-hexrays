int __thiscall sub_1026BB60(_DWORD *this)
{
  int v2; // ebp
  int i; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // edx
  int v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-Ch] BYREF
  _BYTE v12[4]; // [esp+18h] [ebp-8h] BYREF
  _BYTE v13[4]; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *, int *, int *))(*this + 24))(this, v13, v12, &v11, &v10);
  v2 = 0;
  for ( i = v11 + v10; v2 < this[75]; ++v2 )
  {
    v4 = *(_DWORD *)(this[72] + 4 * v2);
    v5 = *(_DWORD *)(this[58] + 12 * v4);
    if ( v5 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 128))(v5) )
      {
        v6 = this[80];
        i += this[53];
        v7 = 0;
        if ( v6 > 0 )
        {
          v8 = (_DWORD *)this[77];
          while ( *v8 != v4 )
          {
            ++v7;
            ++v8;
            if ( v7 >= v6 )
              goto LABEL_11;
          }
          if ( v7 != -1 )
            i += 3;
        }
      }
    }
LABEL_11:
    ;
  }
  return i;
}
