int __thiscall sub_10279850(_DWORD **this)
{
  int v2; // ebx
  int result; // eax
  int i; // ebp
  _DWORD *v5; // edi
  void (__thiscall **v6)(_DWORD *, int); // ebx
  int v7; // eax
  int v8; // eax
  void (__thiscall **v9)(_DWORD *, _DWORD); // ebx
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // eax
  _DWORD *v13; // ecx
  int (__thiscall *v14)(_DWORD *, _DWORD *, int); // edx
  int v15; // ebx
  int (__thiscall *v16)(_DWORD **, int); // edx
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // ebx
  _DWORD *v21; // edx
  int v22; // eax
  int (__thiscall *v23)(_DWORD **, int, int, int); // edx
  void (__thiscall **v24)(_DWORD *, int); // ebx
  int v25; // eax
  void (__thiscall **v26)(_DWORD *, int); // ebx
  int v27; // eax
  int v28; // [esp+7Ch] [ebp-30h]
  int v29; // [esp+80h] [ebp-2Ch]
  int v30; // [esp+84h] [ebp-28h]
  int v31; // [esp+88h] [ebp-24h] BYREF
  int v32; // [esp+8Ch] [ebp-20h] BYREF
  int v33; // [esp+90h] [ebp-1Ch]
  int v34; // [esp+94h] [ebp-18h]
  int v35; // [esp+98h] [ebp-14h]
  int v36; // [esp+9Ch] [ebp-10h]
  int v37; // [esp+A0h] [ebp-Ch] BYREF
  int v38; // [esp+A4h] [ebp-8h] BYREF
  char v39[4]; // [esp+A8h] [ebp-4h] BYREF

  sub_1024AD80((int)this);
  v2 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this[74] + 832))(this[74], this[72]);
  v29 = v2;
  result = ((int (__thiscall *)(_DWORD **))(*this)[212])(this);
  if ( v2 != result )
  {
    for ( i = 0; i < v2; ++i )
    {
      if ( ((*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this[74] + 844))(this[74], this[72], i) & 1) != 0 )
      {
        v5 = 0;
      }
      else
      {
        if ( sub_100DDA40(100) )
          v5 = (_DWORD *)sub_1027D150(Locale);
        else
          v5 = 0;
        v6 = (void (__thiscall **)(_DWORD *, int))(*v5 + 128);
        v7 = ((int (__thiscall *)(_DWORD **))(*this)[205])(this);
        (*v6)(v5, v7);
        v8 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this[74] + 852))(this[74], this[72], i);
        if ( v8 )
          sub_1027D090(1, v8);
        v9 = (void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 20);
        v10 = (_DWORD *)((int (__thiscall *)(_DWORD **, int *))(*this)[57])(this, &v38);
        (*v9)(v5, *v10);
        v2 = v29;
      }
      result = ((int (__thiscall *)(_DWORD **, int, _DWORD *, _DWORD))(*this)[209])(this, i, v5, 0);
    }
  }
  v36 = 2;
  do
  {
    v11 = 0;
    v28 = 0;
    if ( v2 > 0 )
    {
      do
      {
        v12 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this[74] + 844))(this[74], this[72], v11);
        v13 = this[74];
        v14 = *(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v13 + 848);
        v35 = v12;
        v15 = v14(v13, this[72], v11);
        v16 = (int (__thiscall *)(_DWORD **, int))(*this)[211];
        v33 = v15;
        v30 = v15;
        result = v16(this, v11);
        v17 = (_DWORD *)result;
        if ( result )
        {
          (*(void (__thiscall **)(int, int *, char *))(*(_DWORD *)result + 8))(result, &v31, v39);
          v18 = v31;
          v19 = v35 & 0x10;
          v34 = v31;
          v38 = v19;
          if ( (v35 & 0x10) == 0 )
          {
            v20 = v11 + 1;
            if ( v11 + 1 < v29 )
            {
              do
              {
                v21 = *this;
                v32 = 0;
                v37 = 0;
                if ( ((int (__thiscall *)(_DWORD **, int))v21[211])(this, v20) )
                {
                  v22 = ((int (__thiscall *)(_DWORD **, int))(*this)[211])(this, v20);
                  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v22 + 8))(v22, &v32, &v37);
                }
                if ( !v32 )
                  v30 += (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this[74] + 848))(this[74], this[72], v20);
                ++v20;
              }
              while ( v20 < v29 );
              v18 = v31;
              v19 = v38;
            }
            v15 = v33;
          }
          if ( v30 >= 0 )
          {
            v18 = v30;
            v31 = v30;
          }
          v23 = (int (__thiscall *)(_DWORD **, int, int, int))(*this)[215];
          if ( v19 )
            result = v23(this, v11, v28 + v18 - v34, v34 - 2);
          else
            result = v23(this, v11, v28, v18 - 2);
          v28 += v15;
          if ( (v35 & 1) == 0 )
          {
            v24 = (void (__thiscall **)(_DWORD *, int))(*v17 + 128);
            v25 = ((int (__thiscall *)(_DWORD **))(*this)[205])(this);
            (*v24)(v17, v25);
            v26 = (void (__thiscall **)(_DWORD *, int))(*v17 + 104);
            v27 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*this[74] + 840))(this[74], this[72], v11, 0);
            (*v26)(v17, v27);
            result = sub_1027D580(v30);
          }
        }
        else
        {
          v28 += v15;
        }
        ++v11;
      }
      while ( v11 < v29 );
      v2 = v29;
    }
    --v36;
  }
  while ( v36 );
  return result;
}
