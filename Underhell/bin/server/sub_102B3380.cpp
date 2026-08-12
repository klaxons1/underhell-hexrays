int __thiscall sub_102B3380(int this)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  float v6; // [esp+4h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-Ch]

  sub_10025DD0((_DWORD *)this);
  v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v6, 0);
  sub_10023E00((char *)this, 30);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 784))(this, this);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1224))(this);
  if ( (*(_BYTE *)(this + 252) & 1) == 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2268))(this);
    if ( (dword_1069042C & 1) != 0 )
    {
      sub_100DD660(this, &flt_106F1CA8);
      sub_100D7260((float *)this, &flt_106F1CB4);
      v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
      return sub_100EC4A0((int *)this, v7, 0);
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 2272))(this);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3)
          || (*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) + 256) & 0x8000) != 0
          || (v4 = *(_DWORD *)this,
              v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
              (*(int (__thiscall **)(int, int))(v4 + 1080))(this, v5) == 4) )
        {
          sub_100285C0((_DWORD *)this, 0, 1);
        }
      }
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 2236))(this);
    }
  }
  return result;
}
