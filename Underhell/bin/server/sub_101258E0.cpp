int __thiscall sub_101258E0(int this)
{
  int v2; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 0);
  sub_100EAB80((_DWORD *)this, 32);
  v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
  sub_10135700(v2, 0, *(float *)(dword_106B31C8 + 16), (int)*(float *)(this + 732), COERCE_INT(0.0));
  sub_100EC3F0((_DWORD *)this, (int)sub_10124520, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
