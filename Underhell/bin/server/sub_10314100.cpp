int __thiscall sub_10314100(int this)
{
  int v3; // eax
  float *v4; // eax
  float v5; // [esp+0h] [ebp-24h]
  _BYTE v6[12]; // [esp+Ch] [ebp-18h] BYREF
  float v7[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 224) || *(_DWORD *)(this + 4120) != 4 )
  {
    sub_102AA7E0((_DWORD *)(this + 3964));
    return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_1066C8D4);
  }
  if ( *(_DWORD *)(this + 4212) == 4 )
  {
    sub_100BD6D0((void *)this, *(_DWORD *)(this + 4204), (int)v6, v7, 0, 0);
    sub_102AAFE0(this + 3964, v7);
  }
  else
  {
    if ( *(_DWORD *)(this + 4212) != 6 )
      return sub_10312FC0((_DWORD *)this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
      sub_102AA470((float *)(this + 3964), v4);
    }
  }
  sub_102AB8A0((_DWORD *)(this + 3964));
  v5 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC3F0((_DWORD *)this, (int)sub_10314100, v5, off_1066C8D4);
}
