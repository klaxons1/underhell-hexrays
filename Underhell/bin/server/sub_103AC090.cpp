int __thiscall sub_103AC090(int this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  result = *(_DWORD *)(this + 3720);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 72))(
           dword_106B31D0,
           *(_DWORD *)(result + 24),
           "NPC_Stalker.BurnWall");
    sub_1023AEF0(v3, v6);
    v5 = *(_DWORD *)(*(_DWORD *)(this + 3720) + 24);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023AEF0(v4, v5);
    sub_1025FAC0(*(_DWORD *)(this + 3724));
    sub_1025FAC0(*(_DWORD *)(this + 3720));
    *(float *)(this + 3712) = 0.0;
    *(float *)(this + 3716) = 0.0;
    *(_DWORD *)(this + 3720) = 0;
    sub_100EC3F0((_DWORD *)this, (int)sub_10039730, 0.0, 0);
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3664) )
      sub_100EC4A0((int *)this, *(float *)(this + 3664), 0);
    *(float *)(this + 3700) = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_10023E00((char *)this, 21);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1840))(this);
  }
  return result;
}
