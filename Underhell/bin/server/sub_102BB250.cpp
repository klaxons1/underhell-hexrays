int __thiscall sub_102BB250(int this, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  int result; // eax
  char *v7; // [esp+10h] [ebp-Ch]

  v4 = *(_DWORD *)this;
  v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 208))(a2, "LeftHand");
  sub_100BEF30(v5, v7);
  (*(void (__thiscall **)(int, int))(v4 + 140))(this, a2);
  sub_100E10C0(this, &flt_106F1CA8);
  *(_DWORD *)(this + 816) = 0;
  if ( a3 )
    *(_DWORD *)(this + 804) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(this + 804) = -1;
  sub_100EC3F0((_DWORD *)this, (int)sub_102BAF60, 0.0, 0);
  result = sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  *(_BYTE *)(this + 820) = 1;
  return result;
}
