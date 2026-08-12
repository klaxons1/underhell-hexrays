int __thiscall sub_101248D0(int this)
{
  int v2; // edx
  int v3; // edi
  int v4; // eax
  int result; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 0);
  sub_100EAB80((_DWORD *)this, 32);
  if ( *(float *)(this + 852) < 0.0 )
    *(float *)(this + 852) = 0.0;
  if ( *(float *)(this + 840) == 0.0 )
    *(float *)(this + 840) = 25.0;
  v2 = *(_DWORD *)(this + 812);
  *(_DWORD *)(this + 804) = *(_DWORD *)(this + 800);
  v3 = *(_DWORD *)dword_106B31F0;
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v2);
  result = (*(int (__thiscall **)(int, int))(v3 + 32))(dword_106B31F0, v4);
  *(_DWORD *)(this + 848) = result;
  return result;
}
