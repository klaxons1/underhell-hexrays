void __thiscall sub_1003CB30(int this, _DWORD *a2, char a3)
{
  int v4; // eax
  float *v5; // eax
  int v6; // edx
  float *v7; // eax
  bool v8; // zf
  float v9; // edx
  float v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  float v13[3]; // [esp+8h] [ebp-24h] BYREF
  float v14[3]; // [esp+14h] [ebp-18h] BYREF
  float v15[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( a2 )
    v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    v4 = -1;
  if ( v4 != *(_DWORD *)(this + 324) )
  {
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 36))(this);
    v15[0] = *v5;
    v15[1] = v5[1];
    v6 = *(_DWORD *)this;
    v15[2] = v5[2];
    v7 = (float *)(*(int (__thiscall **)(int))(v6 + 40))(this);
    v14[0] = *v7;
    v14[1] = v7[1];
    v14[2] = v7[2];
    sub_10038150(this);
    v8 = *(_DWORD *)(this + 324) == -1;
    v9 = *(float *)(this + 248);
    v10 = *(float *)(this + 252);
    v13[0] = *(float *)(this + 244);
    v13[1] = v9;
    v13[2] = v10;
    if ( !v8 )
    {
      v11 = *(_DWORD *)(this + 324);
      if ( v11 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) != v11 >> 12 )
        v12 = 0;
      else
        v12 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 1);
      sub_1003B620((_DWORD *)this, v12, (_DWORD *)this);
    }
    if ( a2 )
      sub_1003CA00((_DWORD *)this, a2, (_DWORD *)this);
    *(_BYTE *)(this + 318) = a3;
    *(float *)(this + 500) = 3.4028235e38;
    *(float *)(this + 504) = 3.4028235e38;
    *(float *)(this + 508) = 3.4028235e38;
    *(float *)(this + 512) = 3.4028235e38;
    *(float *)(this + 516) = 3.4028235e38;
    *(float *)(this + 520) = 3.4028235e38;
    *(float *)(this + 244) = 3.4028235e38;
    *(float *)(this + 248) = 3.4028235e38;
    *(float *)(this + 252) = 3.4028235e38;
    sub_10037BA0(this, v15);
    sub_10037CA0(this, v14);
    sub_100399E0(this, v13);
  }
}
