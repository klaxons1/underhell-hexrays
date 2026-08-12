int __thiscall sub_10241830(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int result; // eax
  int v8; // [esp+10h] [ebp-10h]
  _WORD *v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h] BYREF

  v9 = this;
  while ( 1 )
  {
    this[40] &= ~0x200u;
    if ( (int)a2[3] > 0 )
    {
      v3 = 0;
      v8 = a2[3];
      do
      {
        v4 = v3 + *a2;
        if ( *(_DWORD *)(v4 + 8) )
        {
          v10 = *(_DWORD *)(*a2 + v3 + 8);
          v5 = sub_1023CEC0((unsigned __int8 (__cdecl **)(int, int))&off_103FCF74, (int)&v10);
          if ( v5 != -1 )
          {
            v6 = *(_DWORD *)(dword_103FCF78 + 24 * v5 + 20);
            if ( v6 )
              (*(void (__thiscall **)(int, _WORD *, int))(*(_DWORD *)v6 + 8))(v6, v9, v4);
          }
        }
        v3 += 24;
        --v8;
      }
      while ( v8 );
      this = v9;
    }
    result = a2[5];
    if ( !result )
      break;
    a2 = (_DWORD *)a2[5];
  }
  return result;
}
