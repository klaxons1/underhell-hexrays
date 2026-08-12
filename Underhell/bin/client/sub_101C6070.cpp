void __thiscall sub_101C6070(int this, float a2)
{
  double v3; // st7
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  float *v7; // edx
  double v8; // st6
  float *v9; // edx
  double v10; // st6
  float *v11; // edx
  double v12; // st6
  int v13; // ebx
  double v14; // st6
  double v15; // st5
  double v16; // st4
  int v17; // eax
  int i; // edi
  int v19; // ecx
  int v20; // edx
  double v21; // st3
  float *v22; // edx
  int v23; // eax
  double v24; // st3
  int v25; // eax
  double v26; // rt0
  double v27; // rt1
  double v28; // st4
  double v29; // st6
  int v30; // edx
  bool v31; // c0
  double v32; // st7
  double v33; // st6
  double v34; // st6
  double v35; // rt1
  double v36; // st4
  double v37; // rtt
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  float *v41; // ecx
  unsigned __int64 X; // [esp+0h] [ebp-48h]
  double v43; // [esp+30h] [ebp-18h]
  _DWORD v44[2]; // [esp+3Ch] [ebp-Ch] BYREF
  void *Src; // [esp+44h] [ebp-4h]

  sub_101C6010(v44, *(_DWORD *)this, *(_DWORD *)(this + 4));
  v3 = a2;
  v4 = 0;
  if ( *(int *)(this + 4) > 0 )
  {
    v5 = *(_DWORD *)this;
    do
    {
      v6 = 0;
      if ( v5 > 0 )
      {
        do
        {
          v7 = (float *)(16 * (v6 + v4 * v5) + *(_DWORD *)(this + 8));
          if ( v3 >= *v7 )
            v8 = *v7;
          else
            v8 = a2;
          *v7 = v8;
          v9 = (float *)(16 * (v6 + v4 * *(_DWORD *)this) + *(_DWORD *)(this + 8) + 4);
          if ( v3 >= *v9 )
            v10 = *v9;
          else
            v10 = a2;
          *v9 = v10;
          v11 = (float *)(16 * (v6 + v4 * *(_DWORD *)this) + *(_DWORD *)(this + 8) + 8);
          if ( v3 >= *v11 )
            v12 = *v11;
          else
            v12 = a2;
          *v11 = v12;
          v5 = *(_DWORD *)this;
          ++v6;
        }
        while ( v6 < *(_DWORD *)this );
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(this + 4) );
  }
  v13 = 0;
  if ( *(int *)(this + 4) > 0 )
  {
    v14 = 0.0;
    v15 = 1.0;
    v16 = 255.0;
    do
    {
      v17 = *(_DWORD *)this;
      for ( i = 0; i < *(_DWORD *)this; ++i )
      {
        v19 = 16 * (i + v13 * v17);
        if ( *(float *)(v19 + *(_DWORD *)(this + 8) + 4) >= (double)*(float *)(v19 + *(_DWORD *)(this + 8)) )
        {
          v23 = *(_DWORD *)(this + 8);
          v21 = *(float *)(v19 + v23 + 4);
          v22 = (float *)(v19 + v23);
        }
        else
        {
          v20 = *(_DWORD *)(this + 8);
          v21 = *(float *)(v20 + v19);
          v22 = (float *)(v19 + v20);
        }
        if ( v21 <= v22[2] )
        {
          v24 = v22[2];
        }
        else if ( *(float *)(*(_DWORD *)(this + 8) + v19 + 4) >= (double)*(float *)(v19 + *(_DWORD *)(this + 8)) )
        {
          v24 = v22[1];
        }
        else
        {
          v24 = *v22;
        }
        if ( v14 == v24 )
        {
          v25 = 0;
          while ( 1 )
          {
            v27 = v16;
            v28 = v14;
            v29 = v27;
            v30 = v25 + 4 * (i + v13 * v44[0]);
            ++v25;
            *((float *)Src + v30) = v28;
            if ( v25 >= 4 )
              break;
            v26 = v28;
            v16 = v29;
            v14 = v26;
          }
        }
        else
        {
          v43 = v16 * (v24 * (v15 / v3));
          v31 = ceil(v43) > 255.0;
          v32 = 255.0;
          if ( v31 )
          {
            v33 = 255.0;
          }
          else
          {
            v33 = ceil(v43);
            v32 = 255.0;
          }
          v34 = (double)(int)v33;
          v35 = 0.00392156862745098 * a2 * (double)(int)v34;
          *((float *)Src + 4 * i + 4 * v13 * v44[0] + 3) = v34;
          *((float *)Src + 4 * i + 4 * v13 * v44[0]) = *(float *)(16 * (i + v13 * *(_DWORD *)this)
                                                                + *(_DWORD *)(this + 8))
                                                     * (1.0
                                                      / v35);
          *((float *)Src + 4 * i + 4 * v13 * v44[0] + 1) = *(float *)(16 * (i + v13 * *(_DWORD *)this)
                                                                    + *(_DWORD *)(this + 8)
                                                                    + 4)
                                                         * (1.0
                                                          / v35);
          *((float *)Src + 4 * i + 4 * v13 * v44[0] + 2) = 1.0
                                                         / v35
                                                         * *(float *)(16 * (i + v13 * *(_DWORD *)this)
                                                                    + *(_DWORD *)(this + 8)
                                                                    + 8);
          v36 = v32;
          v3 = a2;
          v29 = v36;
          v28 = 0.0;
          v15 = 1.0;
        }
        v17 = *(_DWORD *)this;
        v37 = v28;
        v16 = v29;
        v14 = v37;
      }
      ++v13;
    }
    while ( v13 < *(_DWORD *)(this + 4) );
  }
  X = __PAIR64__(16 * *(_DWORD *)(this + 4) * *(_DWORD *)this, (unsigned int)Src);
  memcpy_0(*(void **)(this + 8), (const void *)X, HIDWORD(X));
  v38 = 0;
  if ( *(int *)(this + 4) > 0 )
  {
    v39 = *(_DWORD *)this;
    do
    {
      v40 = 0;
      if ( v39 > 0 )
      {
        do
        {
          v41 = (float *)(16 * (v40 + v38 * v39) + *(_DWORD *)(this + 8) + 12);
          ++v40;
          *v41 = *v41 * 0.00392156862745098;
          v39 = *(_DWORD *)this;
        }
        while ( v40 < *(_DWORD *)this );
      }
      ++v38;
    }
    while ( v38 < *(_DWORD *)(this + 4) );
  }
  Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)v44);
}
