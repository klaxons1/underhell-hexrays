void __thiscall sub_1008A130(int *this, unsigned __int16 a2)
{
  int v2; // edi
  int v4; // esi
  int v5; // eax
  double v6; // st7
  int v7; // esi
  float v8; // [esp+Ch] [ebp-38h]
  int v9[3]; // [esp+1Ch] [ebp-28h] BYREF
  int v10[3]; // [esp+28h] [ebp-1Ch] BYREF
  int v11[3]; // [esp+34h] [ebp-10h] BYREF
  float v12; // [esp+40h] [ebp-4h] BYREF

  v2 = dword_1042C4EC + 168 * a2;
  if ( *(_DWORD *)(v2 + 156) != *((_DWORD *)off_103DC81C + 1)
    && a2 != 0xFFFF
    && (*(_WORD *)(v2 + 8) & 4) != 0
    && byte_1042C598 != 0
    && *(_BYTE *)((*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 20))(*(unsigned __int16 *)(v2 + 4)) + 92) != 0xFF )
  {
    v4 = sub_1007A730(off_103DCD78, *(_DWORD *)v2);
    if ( !sub_10085580(&dword_1042C4C8, v4) && !sub_10085530(&dword_1042C4C8, v4) )
    {
      sub_100856C0((int)&dword_1042C4C8, v4, (float *)v11, &v12);
      sub_10089190((int)&dword_1042C4C8, v4, *(unsigned __int16 *)(v2 + 4), (float *)v11, v12, (int)v9, (int)v10);
      if ( !(*(unsigned __int8 (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1041315C + 132))(
              dword_1041315C,
              v9,
              v10) )
      {
        v5 = sub_10089990(this + 1);
        v6 = v12;
        v5 *= 20;
        *(_WORD *)(v5 + this[1]) = a2;
        v7 = v5 + this[1];
        v8 = v6;
        *(float *)(v7 + 4) = sub_10086F20((int)v11, v8);
        *(_DWORD *)(v2 + 156) = *((_DWORD *)off_103DC81C + 1);
      }
    }
  }
}
