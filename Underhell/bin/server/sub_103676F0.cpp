void __thiscall sub_103676F0(int this)
{
  bool v2; // zf
  int v3; // ebx
  int *v4; // ecx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(_DWORD *)(this + 92) == (_DWORD)"npc_fastzombie";
  *(_BYTE *)(this + 4004) = 0;
  *(_WORD *)(this + 3776) = 0;
  *(_BYTE *)(this + 3776) = !v2 && !sub_100D6240((_DWORD *)this, "npc_fastzombie");
  sub_100CF450((_DWORD *)this, 5);
  if ( *(_DWORD *)(this + 220) != 50 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 50;
  }
  *(float *)(this + 1684) = 0.2;
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 131083);
  if ( *(_BYTE *)(this + 3776) == 1 )
    sub_10020480((_DWORD *)this, 131074);
  v3 = dword_106B31C8;
  if ( *(_DWORD *)(this + 1672) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 1672);
    }
    *(float *)(this + 1672) = *(float *)(v3 + 12);
  }
  *(float *)(this + 3984) = 1.0;
  *(_DWORD *)(this + 4016) = 0;
  *(_WORD *)(this + 3988) = 0;
  *(_BYTE *)(this + 3991) = 0;
  sub_1032CE00(this);
}
