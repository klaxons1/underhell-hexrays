int __thiscall sub_103B25C0(int this)
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  float v5[9]; // [esp+14h] [ebp-24h] BYREF

  if ( sub_103B0F10((_DWORD *)this) )
  {
    sub_100E0970(this, v2, 0, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EAD6C);
    sub_100EC3F0((_DWORD *)this, (int)sub_103B0F70, 0.0, 0);
    sub_100EA9A0((int *)this, 1024);
  }
  v3 = sub_1025FB50(1);
  if ( v3 )
    *(_DWORD *)(this + 3944) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    *(_DWORD *)(this + 3944) = -1;
  *(float *)(this + 3948) = 0.0;
  v5[0] = *(float *)(dword_106EB294 + 44);
  v5[1] = *(float *)(dword_106EB324 + 44);
  v5[2] = *(float *)(dword_106EB3B4 + 44);
  v5[3] = *(float *)(dword_106EB36C + 44);
  result = dword_106EB204;
  v5[4] = *(float *)(dword_106EB2DC + 44);
  v5[5] = *(float *)(dword_106EB174 + 44);
  v5[6] = *(float *)(dword_106EB1BC + 44);
  v5[7] = *(float *)(dword_106EB204 + 44);
  v5[8] = *(float *)(dword_106EB24C + 44);
  qmemcpy((void *)(this + 3968), v5, 0x24u);
  return result;
}
