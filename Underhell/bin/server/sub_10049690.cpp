void __thiscall sub_10049690(int this)
{
  _BYTE *v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  int (__thiscall *v9)(int); // edx
  int v10; // eax
  float v11; // [esp+14h] [ebp-1Ch] BYREF
  float v12; // [esp+18h] [ebp-18h]
  float v13; // [esp+1Ch] [ebp-14h]
  float v14[3]; // [esp+20h] [ebp-10h] BYREF
  int v15; // [esp+2Ch] [ebp-4h]
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  sub_10043050((void *)this, 0, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) && *(float *)(this + 904) >= 1.0 )
  {
    v2 = (_BYTE *)(this + 224);
    if ( *(_BYTE *)(this + 224) != 2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
      *v2 = 2;
    }
    sub_100EC3F0(0, 0.0, 0);
    sub_10031AF0(this);
    if ( sub_1002ED60(this, (int)&savedregs, (int)v2) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320);
      v5 = *(_DWORD *)(this + 320);
      v15 = v4;
      v6 = (float *)(*(int (__thiscall **)(int))(v5 + 8))(this + 320);
      v7 = *(float *)(v15 + 4);
      v8 = *(float *)(v3 + 8);
      v9 = *(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4);
      v11 = *v6;
      v12 = v7;
      v13 = v8 + 1.0;
      v10 = v9(this + 320);
      sub_1025F360(this, v10, &v11);
    }
    else
    {
      v14[0] = 4.0;
      v14[1] = 4.0;
      v14[2] = 1.0;
      v11 = -4.0;
      v12 = -4.0;
      v13 = 0.0;
      sub_1025F360(this, &v11, v14);
    }
  }
}
