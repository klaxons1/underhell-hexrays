void __thiscall sub_103BFD70(int this)
{
  int v2; // eax
  float v3; // [esp+Ch] [ebp-Ch]

  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 2260))(this, 1) )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.2,
           0.40000001)
       + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0((int *)this, v3, 0);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
        sub_100285C0((_DWORD *)this, 0, 1);
    }
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 2256))(this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      sub_100EC3F0((_DWORD *)this, (int)sub_103BFB90, 0.0, 0);
      if ( !*(_BYTE *)(this + 3736) )
        sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Alert", 0.0, 0);
    }
  }
}
