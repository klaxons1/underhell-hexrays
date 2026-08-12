char __thiscall sub_1008D870(_BYTE *this)
{
  int v2; // eax
  void (__thiscall *v3)(_BYTE *, float *); // edx
  int v4; // eax
  bool v5; // bl
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF

  this[209] = 0;
  sub_102334D0("decals/simpleshadow", "Decal textures", 1);
  v2 = *(_DWORD *)this;
  v7[0] = 0.1;
  v3 = *(void (__thiscall **)(_BYTE *, float *))(v2 + 116);
  v7[1] = 0.1;
  v7[2] = -1.0;
  v3(this, v7);
  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 128))(this, 50.0);
  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 132))(this, 0.0049999999);
  *((_DWORD *)this + 79) = 8;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C);
  v5 = v4 < 80;
  if ( v4 >= 80 && *(_DWORD *)(dword_1042C0AC + 48) )
    sub_1008D370(this);
  if ( *(_DWORD *)(dword_1042C2A4 + 48)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 384))(dword_1047C96C) )
  {
    sub_10229140(&unk_1042C2A0, 0);
    sub_100890B0((int)this);
  }
  if ( !v5 && *(_DWORD *)(dword_1042C2A4 + 48) )
    sub_1008A530(this);
  (*(void (__thiscall **)(int, int (*)()))(*(_DWORD *)dword_1047C96C + 180))(dword_1047C96C, sub_100890A0);
  return 1;
}
