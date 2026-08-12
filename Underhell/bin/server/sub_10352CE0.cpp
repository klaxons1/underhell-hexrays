void __thiscall sub_10352CE0(_DWORD *this)
{
  int (*v2)(void); // eax
  double v3; // st7
  double v4; // st7
  void (__noreturn ***v5)(); // eax
  float v6; // [esp+1Ch] [ebp-8h]
  int v7; // [esp+20h] [ebp-4h]

  v7 = this[55];
  v2 = *(int (**)(void))(*this + 448);
  this[1036] = 0;
  v6 = (float)v7;
  *((_BYTE *)this + 4142) = 0;
  *((_BYTE *)this + 4148) = 0;
  v3 = v6 / (double)v2() * *((float *)this + 1044);
  if ( v3 <= *((float *)this + 1044) )
  {
    if ( v3 < 0.5 )
      v3 = 0.5;
  }
  else
  {
    v3 = *((float *)this + 1044);
  }
  v4 = v3 * (1.0 - (double)(int)this[1034] / *(float *)(dword_106E68F4 + 44)) + *(float *)(dword_106B31C8 + 12);
  this[1034] = 0;
  *((float *)this + 1041) = v4;
  if ( this[1026] )
  {
    v5 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(v5, this[1026], 0.0, 0.050000001);
  }
  sub_1023C380(this, (int)"NPC_CombineGunship.CannonStopSound", 0.0, 0);
}
