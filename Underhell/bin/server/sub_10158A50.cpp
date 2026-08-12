int __thiscall sub_10158A50(int this, int a2, int a3)
{
  int result; // eax
  float v5; // [esp+20h] [ebp-4h]

  v5 = *(float *)(dword_106B31C8 + 16);
  *(float *)(dword_106B31C8 + 16) = *(float *)(a2 + 4328) * v5;
  sub_101574E0((char *)this);
  *(_DWORD *)(this + 8) = a3;
  *(_BYTE *)(this + 904) = 0;
  *(_DWORD *)(this + 4) = a2;
  *(float *)(a3 + 56) = *(float *)(dword_106B7104 + 44);
  (*(void (**)(int, const char *, ...))(*(_DWORD *)this + 16))(
    this,
    "start %f %f %f",
    *(float *)(*(_DWORD *)(this + 8) + 152),
    *(float *)(*(_DWORD *)(this + 8) + 156),
    *(float *)(*(_DWORD *)(this + 8) + 160));
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 48))(this);
  *(_DWORD *)(*(_DWORD *)(this + 8) + 40) = *(_DWORD *)(*(_DWORD *)(this + 8) + 36);
  result = (*(int (**)(int, const char *, ...))(*(_DWORD *)this + 16))(
             this,
             "end %f %f %f",
             *(float *)(*(_DWORD *)(this + 8) + 152),
             *(float *)(*(_DWORD *)(this + 8) + 156),
             *(float *)(*(_DWORD *)(this + 8) + 160));
  *(float *)(dword_106B31C8 + 16) = v5;
  *(_DWORD *)(this + 4) = 0;
  return result;
}
