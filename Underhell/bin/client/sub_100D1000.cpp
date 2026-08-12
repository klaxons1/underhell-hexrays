int __thiscall sub_100D1000(float *this)
{
  int v2; // ebx
  int v3; // edi
  _DWORD *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // rt0
  double v8; // st6
  int v9; // ebx
  int v10; // edi
  _DWORD *v11; // eax
  int v13; // [esp+Ch] [ebp-10h] BYREF
  float v14; // [esp+10h] [ebp-Ch]
  _DWORD v15[2]; // [esp+14h] [ebp-8h] BYREF

  if ( *((_BYTE *)this + 280) )
  {
    v2 = dword_1047CA6C;
    v3 = *(_DWORD *)dword_1047CA6C;
    v4 = (_DWORD *)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 228))(this, &v13);
    (*(void (__thiscall **)(int, _DWORD))(v3 + 72))(v2, *v4);
    (*(void (__thiscall **)(float *, _DWORD, int, int, _DWORD))(*(_DWORD *)this + 776))(
      this,
      *((_DWORD *)this + 76),
      (int)this[88],
      (int)this[90],
      *((_DWORD *)this + 52));
    v5 = this[72];
    v14 = this[72];
    if ( v5 > 0.0 )
    {
      v6 = 1.0;
      while ( 1 )
      {
        if ( v6 > v5 )
        {
          (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 228))(this, v15);
          v15[1] = HIBYTE(v15[0]);
          v13 = (int)((double)HIBYTE(v15[0]) * v14);
          HIBYTE(v15[0]) = v13;
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v15[0]);
        }
        (*(void (__thiscall **)(float *, _DWORD, int, int, _DWORD))(*(_DWORD *)this + 776))(
          this,
          *((_DWORD *)this + 78),
          (int)this[88],
          (int)this[90],
          *((_DWORD *)this + 52));
        v8 = v14 - 1.0;
        v14 = v8;
        if ( v8 <= 0.0 )
          break;
        v7 = v8;
        v6 = 1.0;
        v5 = v7;
      }
    }
  }
  if ( *((_BYTE *)this + 281) )
  {
    v9 = dword_1047CA6C;
    v10 = *(_DWORD *)dword_1047CA6C;
    v11 = (_DWORD *)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 228))(this, &v13);
    (*(void (__thiscall **)(int, _DWORD))(v10 + 72))(v9, *v11);
    (*(void (__thiscall **)(float *, _DWORD, int, int, _DWORD))(*(_DWORD *)this + 776))(
      this,
      *((_DWORD *)this + 80),
      (int)this[92],
      (int)this[94],
      *((_DWORD *)this + 53));
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 772))(this);
}
