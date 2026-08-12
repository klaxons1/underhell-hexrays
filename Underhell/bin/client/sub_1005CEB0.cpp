int __thiscall sub_1005CEB0(_DWORD *this)
{
  float *v2; // eax
  int v3; // esi
  _DWORD *v4; // edi
  float v6; // [esp+0h] [ebp-90h]
  _BYTE v7[132]; // [esp+Ch] [ebp-84h] BYREF

  nullsub_4();
  v2 = (float *)off_103DC81C;
  v3 = 1;
  if ( *((int *)off_103DC81C + 5) >= 1 )
  {
    v4 = this + 297;
    do
    {
      if ( (unsigned int)(v3 - 1) > 0x10 )
      {
        Error("UpdatePlayerName with bogus slot %d\n", v3);
      }
      else if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(this[295] + 16))(this + 295, v3)
             && (*(unsigned __int8 (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_1041315C + 32))(
                  dword_1041315C,
                  v3,
                  v7) )
      {
        *v4 = sub_100AF260(v7);
      }
      else
      {
        *v4 = sub_100AF260("unconnected");
      }
      v2 = (float *)off_103DC81C;
      ++v3;
      ++v4;
    }
    while ( v3 <= *((_DWORD *)off_103DC81C + 5) );
  }
  v6 = v2[3] + 0.2;
  return (*(int (__stdcall **)(_DWORD))(*(this - 3) + 408))(LODWORD(v6));
}
