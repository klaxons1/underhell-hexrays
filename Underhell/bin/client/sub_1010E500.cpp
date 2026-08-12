int __thiscall sub_1010E500(_WORD *this, int a2)
{
  int result; // eax
  unsigned __int16 v4; // ax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  char Buffer[512]; // [esp+4h] [ebp-29Ch] BYREF
  char v9[112]; // [esp+204h] [ebp-9Ch] BYREF
  int v10[5]; // [esp+274h] [ebp-2Ch] BYREF
  char ArgList[16]; // [esp+288h] [ebp-18h] BYREF
  int v12; // [esp+298h] [ebp-8h] BYREF
  int v13; // [esp+29Ch] [ebp-4h]

  result = a2;
  if ( a2 > 0 && a2 <= *((_DWORD *)off_103DC81C + 5) )
  {
    if ( *((_DWORD *)this + 1) )
    {
      (*(void (__thiscall **)(int, int, char *))(*(_DWORD *)dword_1041315C + 32))(dword_1041315C, a2, v9);
      result = v10[0];
      if ( v10[0] )
      {
        v12 = v10[0];
        v13 = 0;
        v4 = sub_1010DA40(this + 4, (int)&v12);
        if ( v4 == 0xFFFF )
        {
          sub_10228630((int)v10, 4, ArgList, 16);
          sub_10228370(Buffer, 0x200u, "temp/%s", (char)ArgList);
          v5 = (*(int (__thiscall **)(int, char *, const char *, _DWORD))(*(_DWORD *)dword_1047C96C + 304))(
                 dword_1047C96C,
                 Buffer,
                 "Decal textures",
                 0);
          v6 = v5;
          if ( v5 )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5);
            v13 = v6;
          }
          sub_1010E4A0((int)(this + 4), (int)&v12);
        }
        else
        {
          v6 = *(_DWORD *)(*((_DWORD *)this + 3) + 16 * v4 + 12);
        }
        if ( v6 )
        {
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 56))(*((_DWORD *)this + 1), v6);
        }
        else if ( *((_DWORD *)this + 9) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 1) + 56))(
            *((_DWORD *)this + 1),
            *((_DWORD *)this + 9));
        }
        result = sub_101BC880();
        if ( (_BYTE)result )
        {
          v7 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 12))(this);
          return sub_101BCA60(v7);
        }
      }
    }
  }
  return result;
}
