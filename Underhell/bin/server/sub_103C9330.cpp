void __thiscall sub_103C9330(float *this)
{
  _BYTE *v2; // eax
  int v3; // ebx
  char *v4; // edx
  int v5; // eax
  float v6; // edx
  float *v7; // esi
  float v8[3]; // [esp+1Ch] [ebp-10h] BYREF
  int v9; // [esp+28h] [ebp-4h] BYREF

  v2 = *(_BYTE **)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 28))(this, &v9);
  if ( !v2 || !*v2 )
  {
    this[115] = *(float *)sub_10162BE0(&v9, "models/vortigaunt.mdl");
    sub_100D8500(this);
  }
  sub_10399F00((int)this);
  this[422] = 0.0;
  this[423] = 0.0;
  this[424] = 48.0;
  *((_DWORD *)this + 419) = 2;
  sub_10027A90((int)this, 0);
  *((_DWORD *)this + 420) = 2;
  v3 = (int)*(float *)(dword_106EBF8C + 44);
  if ( *((_DWORD *)this + 55) != v3 )
  {
    (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 464))(this, (_DWORD *)this + 55);
    *((_DWORD *)this + 55) = v3;
  }
  v8[0] = 0.0;
  v8[1] = 0.0;
  v8[2] = 64.0;
  sub_100DC4E0(this, v8);
  sub_10020460(this, 655360);
  sub_10020480(this, 0x1000000);
  v4 = off_1067CE00;
  this[659] = 0.60000002;
  this[1435] = 0.0;
  *((_BYTE *)this + 5753) = 0;
  this[1425] = 0.0;
  *((_BYTE *)this + 5844) = 0;
  *((_DWORD *)this + 1459) = sub_100BEF30((int)this, v4);
  v5 = sub_100BEF30((int)this, off_1067CE04);
  v6 = *this;
  *((_DWORD *)this + 1460) = v5;
  (*(void (__thiscall **)(float *))(LODWORD(v6) + 1164))(this);
  *((_DWORD *)this + 50) = sub_102F4660;
  v7 = this + 690;
  sub_100B8C20(v7, 2.0, 2.0);
  sub_100B8BE0(v7, 1, 1);
  sub_100B8C00(v7, 2.0, 2.0);
}
