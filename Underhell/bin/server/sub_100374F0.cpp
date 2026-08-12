int __thiscall sub_100374F0(_DWORD *this, int a2)
{
  int v2; // ebx
  int v4; // edx
  int (__thiscall *v5)(_DWORD *); // eax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // eax
  char *v14; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  __int16 v25; // [esp+Ch] [ebp-22Ch] BYREF
  int v26; // [esp+10h] [ebp-228h]
  char Destination[128]; // [esp+14h] [ebp-224h] BYREF
  int v28; // [esp+94h] [ebp-1A4h] BYREF
  char v29[128]; // [esp+98h] [ebp-1A0h] BYREF
  char v30[128]; // [esp+118h] [ebp-120h] BYREF
  char v31[128]; // [esp+198h] [ebp-A0h] BYREF
  int v32; // [esp+218h] [ebp-20h] BYREF
  int v33; // [esp+21Ch] [ebp-1Ch]
  int v34; // [esp+220h] [ebp-18h]
  int v35; // [esp+224h] [ebp-14h]
  int v36; // [esp+228h] [ebp-10h]
  int v37; // [esp+22Ch] [ebp-Ch]
  int v38; // [esp+230h] [ebp-8h]
  int v39; // [esp+234h] [ebp-4h]

  v2 = 0;
  v4 = *this;
  v25 = 5;
  v5 = *(int (__thiscall **)(_DWORD *))(v4 + 368);
  v26 = 0;
  v28 = 0;
  Destination[0] = 0;
  v29[0] = 0;
  v30[0] = 0;
  v31[0] = 0;
  if ( v5(this) )
    v26 |= 1u;
  v6 = this[605];
  if ( v6 != -1 && off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v6 >> 12 && off_1061BE18[4 * (this[605] & 0xFFF) + 1] )
    v26 |= 2u;
  if ( (unsigned __int8)sub_1007E040(this[647]) )
    v26 |= 4u;
  v7 = this[531];
  if ( v7 )
  {
    sub_104299C0(Destination, *(char **)(v7 + 44), 0x80u);
    sub_1042CDD0(&v28);
    sub_1042CDF0(&v28, *(_DWORD *)(this[531] + 4), 8 * *(_DWORD *)(this[531] + 8));
    sub_1042CDE0(&v28);
  }
  else
  {
    Destination[0] = 0;
    v28 = 0;
  }
  v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1308))(this, this[532]);
  if ( v8 != -1 && v8 != 1000000000 && v8 != 1000000056 )
  {
    v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1300))(this, this[532]);
    if ( v9 )
      sub_104299C0(v29, *(char **)(v9 + 44), 0x80u);
  }
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1308))(this, this[540]);
  if ( v10 != -1 && v10 != 1000000000 && v10 != 1000000056 )
  {
    v11 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1300))(this, this[540]);
    if ( v11 )
      sub_104299C0(v30, *(char **)(v11 + 44), 0x80u);
  }
  if ( this[227] != -1 )
  {
    v12 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !this[275] && sub_100D7240(this) )
      sub_100BD750(this);
    v13 = (_DWORD *)this[275];
    if ( v13 && *v13 )
      v2 = this[275];
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
    if ( v2 )
    {
      v14 = (char *)sub_100BE1F0(this[227]);
      if ( v14 )
      {
        if ( *v14 )
          sub_104299C0(v31, v14, 0x80u);
      }
    }
  }
  (*(void (__thiscall **)(int, __int16 *, int *))(*(_DWORD *)a2 + 20))(a2, &v25, &dword_105FE190);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  sub_100287D0(this, a2, (int)(this + 548));
  sub_100287D0(this, a2, (int)(this + 556));
  sub_100287D0(this, a2, (int)(this + 564));
  v16 = this[578];
  v17 = this[577];
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v18 = ~this[579];
  v38 = ~v16;
  v19 = this[575];
  v39 = v18;
  v20 = this[576];
  v37 = ~v17;
  v21 = this[574];
  v35 = ~v19;
  v22 = this[572];
  v36 = ~v20;
  v23 = this[573];
  v34 = ~v21;
  v32 = ~v22;
  v33 = ~v23;
  sub_100287D0(this, a2, (int)&v32);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  sub_10083410(a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  return sub_100D83D0(a2);
}
