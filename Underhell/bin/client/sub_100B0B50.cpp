int __usercall sub_100B0B50@<eax>(int a1@<esi>, int a2)
{
  int v2; // edi
  unsigned __int16 v3; // ax
  _WORD *v4; // esi
  unsigned __int16 v5; // bx
  unsigned __int8 v8; // [esp+4h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 548))(v2, 1);
  v3 = dword_1042F810;
  if ( (_WORD)dword_1042F810 != 0xFFFF )
  {
    do
    {
      v4 = *(_WORD **)(dword_1042F804 + 8 * v3);
      v5 = *(_WORD *)(dword_1042F804 + 8 * v3 + 6);
      if ( v4[77] )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_WORD *, int))(*(_DWORD *)v4 + 4))(v4, a1) )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 548))(
            v2,
            v8 & (unsigned __int8)((*((_BYTE *)v4 + 32) != 0) - 1));
          a1 = a2;
          (*(void (__thiscall **)(_WORD *))(*(_DWORD *)v4 + 16))(v4);
        }
        else
        {
          a1 = 1;
          (**(void (__thiscall ***)(_WORD *))v4)(v4);
        }
      }
      v3 = v5;
    }
    while ( v5 != 0xFFFF );
  }
  (*(void (__thiscall **)(int, unsigned __int8))(*(_DWORD *)v2 + 548))(v2, v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
