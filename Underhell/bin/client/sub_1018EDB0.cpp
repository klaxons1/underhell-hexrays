int __thiscall sub_1018EDB0(int this)
{
  int v3; // [esp+8h] [ebp-8h]

  sub_10047330(this);
  *(_DWORD *)this = &C_BaseHLPlayer::`vftable';
  *(_DWORD *)(this + 4) = &C_BaseHLPlayer::`vftable';
  *(_DWORD *)(this + 8) = &C_BaseHLPlayer::`vftable';
  *(_DWORD *)(this + 12) = &C_BaseHLPlayer::`vftable';
  *(_DWORD *)(this + 5032) = 0;
  *(_DWORD *)(this + 5036) = 0;
  *(_DWORD *)(this + 5040) = 0;
  *(_DWORD *)(this + 5044) = 0;
  *(_DWORD *)(this + 5048) = 0;
  sub_101925E0(this + 5164);
  *(_DWORD *)(this + 5276) = -1;
  sub_1003CF30((int *)this, this + 3568, (int *)(this + 3580), 2, 0);
  sub_1003CF30((int *)this, this + 3624, (int *)(this + 3636), 2, 0);
  *(float *)(this + 5308) = 0.0;
  *(float *)(this + 5312) = 0.0;
  *(float *)(this + 5316) = 0.0;
  *(float *)(this + 5320) = 0.0;
  *(float *)(this + 5328) = *(float *)(dword_10432954 + 44);
  sub_10229600("r_flashlightscissor");
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 8))(v3, "0");
  sub_1012CAB0((int)off_103E6EEC[0], "EntityNames", (int)sub_1018E4D0);
  *(_DWORD *)(this + 5296) = 0;
  *(_DWORD *)(this + 5300) = 0;
  *(_DWORD *)(this + 5304) = 0;
  return this;
}
