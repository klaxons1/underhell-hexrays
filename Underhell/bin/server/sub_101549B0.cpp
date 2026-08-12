int __stdcall sub_101549B0(char *Buffer, size_t BufferCount)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi
  char v6; // bl
  size_t v7; // ebx
  char *v8; // esi
  char v9; // [esp+0h] [ebp-CB8h]
  _BYTE v10[4]; // [esp+1Ch] [ebp-C9Ch] BYREF
  char v11; // [esp+20h] [ebp-C98h] BYREF
  _BYTE v12[4]; // [esp+CB0h] [ebp-8h] BYREF
  const char *v13; // [esp+CB4h] [ebp-4h]
  size_t BufferCounta; // [esp+CC4h] [ebp+Ch]

  *Buffer = 0;
  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v3 = sub_1025FB50(1);
    v4 = sub_101E94B0(v3);
    v5 = v4;
    if ( v4 )
    {
      v13 = *(const char **)(v4 + 92);
      if ( !v13 )
        v13 = String;
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v4 + 24));
      (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 28))(v5, v12);
      v9 = v6;
      v7 = BufferCount;
      sub_10429A00(Buffer, BufferCount, "Picker %i/%s - ent %s model %s\n", v9);
    }
    else
    {
      v7 = BufferCount;
    }
    result = sub_10224000(v10);
    BufferCounta = result;
    if ( result > 0 )
    {
      sub_10429A00(Buffer, v7, "%sRecent NPC speech:\n", (char)Buffer);
      v8 = &v11;
      do
      {
        sub_10429A00(Buffer, v7, "%s   time: %6.3f   sound name: %s   scene: %s\n", (char)Buffer);
        v8 += 644;
        --BufferCounta;
      }
      while ( BufferCounta );
      return sub_10429A00(Buffer, v7, "%sCurrent time: %6.3f\n", (char)Buffer);
    }
  }
  return result;
}
