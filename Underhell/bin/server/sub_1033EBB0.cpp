void __thiscall sub_1033EBB0(int this)
{
  int v2; // ecx
  int v3; // eax
  _BYTE v4[12]; // [esp+1Ch] [ebp-Ch] BYREF

  sub_10041D00((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 88))(v2);
  sub_100AC1F0((int *)(this + 4244));
  if ( (*(_DWORD *)(this + 256) & 0x8000000) != 0 )
    sub_10023CB0((char *)this, 78);
  else
    sub_10023E00((char *)this, 78);
  if ( *(_DWORD *)(dword_10698464 + 48) )
  {
    v3 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v4);
    sub_1011C120(v3, 16.0, 0, 255, 0, 0, 0.1);
  }
  if ( *(float *)(this + 4240) <= (double)*(float *)(dword_106B31C8 + 12)
    && sub_1007E760((_DWORD *)*(_DWORD *)(this + 2588)) > 1.0 )
  {
    sub_1007C930(this + 2832, 5.0);
    *(float *)(this + 4240) = 3.4028235e38;
  }
  if ( *(float *)(this + 800) > 0.0
    && *(_DWORD *)(this + 2324) == 3
    && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 2848)
    && sub_1007E760((_DWORD *)*(_DWORD *)(this + 2588)) <= 1.0 )
  {
    sub_1007C930(this + 2832, 0.0);
  }
}
