void __thiscall sub_103CE420(int this)
{
  int v2; // ebx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  *(_BYTE *)(this + 3776) = *(char **)(this + 92) != "npc_zombie" && !sub_100D6240((_DWORD *)this, "npc_zombie");
  sub_100CF450((_DWORD *)this, 5);
  v2 = (int)*(float *)(dword_106EC7BC + 44);
  if ( *(_DWORD *)(this + 220) != v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v2;
  }
  *(float *)(this + 1684) = 0.2;
  sub_100204A0((_DWORD *)this);
  sub_1032CE00(this);
  *(float *)(this + 3800) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              1.0,
                              4.0)
                          + *(float *)(dword_106B31C8 + 12);
}
