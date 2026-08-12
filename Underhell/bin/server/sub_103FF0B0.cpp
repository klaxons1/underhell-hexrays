// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_103FF0B0(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float *a4)
{
  _DWORD *v4; // ebx
  float v5; // eax
  float v6; // edx
  int v7; // edi
  const char *v8; // eax
  int v9; // eax
  int v10; // esi
  const char *v11; // eax
  int v12; // esi
  int v13; // edi
  int *v14; // ecx
  int *v15; // ecx
  int v16; // eax
  int v17; // ecx
  int *v18; // ecx
  float *v19; // eax
  int v20; // eax
  int v21; // eax
  float v22; // [esp+2Ch] [ebp-68h]
  float v23; // [esp+2Ch] [ebp-68h]
  float v25; // [esp+30h] [ebp-64h]
  _DWORD v26[8]; // [esp+38h] [ebp-5Ch] BYREF
  float v27[3]; // [esp+58h] [ebp-3Ch] BYREF
  float v28[3]; // [esp+64h] [ebp-30h] BYREF
  float v29; // [esp+70h] [ebp-24h]
  float v30; // [esp+74h] [ebp-20h]
  float v31; // [esp+78h] [ebp-1Ch]
  float v32; // [esp+7Ch] [ebp-18h] BYREF
  float v33; // [esp+80h] [ebp-14h]
  float v34; // [esp+84h] [ebp-10h]
  int v35; // [esp+88h] [ebp-Ch]
  _DWORD *v36; // [esp+8Ch] [ebp-8h]
  float v37; // [esp+90h] [ebp-4h]
  _DWORD *v38; // [esp+9Ch] [ebp+8h]
  int v39; // [esp+9Ch] [ebp+8h]

  if ( a4 )
  {
    v4 = (_DWORD *)sub_100D1940(a1);
    v36 = v4;
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 320))(v4) )
      {
        v5 = *a4;
        v6 = a4[2];
        v33 = a4[1];
        v32 = v5;
        v34 = v6;
        v38 = (_DWORD *)sub_101E7EA0(v4, 0);
        v7 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
               dword_106B31E4,
               1,
               2,
               a3,
               a2);
        v8 = "sprites/lgtning_noz.vmt";
        if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
          v8 = "sprites/orangelight1.vmt";
        v9 = sub_100FB5C0(v8, 0.80000001);
        v10 = v9;
        if ( v9 )
        {
          sub_100FAD20(v9, &v32, v38);
          sub_1005BC90(v10, 1);
          sub_1005C3A0(v10, 2.0);
          sub_1005C410(v10, 12.0);
          sub_100FB020(v10, 255);
          sub_1005C620((_BYTE *)(v10 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v10 + 116)));
          sub_100EC3F0((_DWORD *)v10, (int)sub_10246D70, 0.0, 0);
          v22 = *(float *)(dword_106B31C8 + 12) + 0.1;
          sub_100EC4A0((int *)v10, v22, 0);
          sub_100F9B80(v10);
          sub_100FA790(v10, 0.0);
        }
        if ( v7 > 0 )
        {
          v35 = v7;
          do
          {
            v11 = "sprites/lgtning_noz.vmt";
            if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
              v11 = "sprites/orangelight1.vmt";
            v12 = sub_100FB5C0(v11, 0.80000001);
            if ( v12 )
            {
              sub_100FAD20(v12, &v32, v38);
              v13 = *(_DWORD *)(v12 + 816);
              if ( *(_DWORD *)(v12 + 4 * v13 + 868) != 1 )
              {
                if ( *(_BYTE *)(v12 + 84) )
                {
                  *(_BYTE *)(v12 + 88) |= 1u;
                }
                else
                {
                  v14 = *(int **)(v12 + 24);
                  if ( v14 )
                    sub_100194B0(v14, 4 * v13 - 4 + 872);
                }
                *(_DWORD *)(v12 + 872 + 4 * v13 - 4) = 1;
              }
              sub_1005C3A0(v12, 2.0);
              v37 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 2));
              v25 = (float)SLODWORD(v37);
              sub_1005C410(v12, v25);
              if ( *(_BYTE *)(v12 + 119) != 0xFF )
              {
                if ( *(_BYTE *)(v12 + 84) )
                {
                  *(_BYTE *)(v12 + 88) |= 1u;
                }
                else
                {
                  v15 = *(int **)(v12 + 24);
                  if ( v15 )
                    sub_100194B0(v15, 116);
                }
                *(_BYTE *)(v12 + 119) = -1;
              }
              sub_1005C620((_BYTE *)(v12 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v12 + 116)));
              sub_100EC3F0((_DWORD *)v12, (int)sub_10246D70, 0.0, 0);
              v23 = *(float *)(dword_106B31C8 + 12) + 0.1;
              sub_100EC4A0((int *)v12, v23, 0);
              sub_100F9B80(v12);
              v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 8, 12);
              v17 = *(_DWORD *)(v12 + 928);
              v37 = (float)v16;
              if ( v17 != LODWORD(v37) )
              {
                if ( *(_BYTE *)(v12 + 84) )
                {
                  *(_BYTE *)(v12 + 88) |= 1u;
                }
                else
                {
                  v18 = *(int **)(v12 + 24);
                  if ( v18 )
                    sub_100194B0(v18, 928);
                }
                *(float *)(v12 + 928) = v37;
              }
              v4 = v36;
            }
            --v35;
          }
          while ( v35 );
        }
        v19 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*v4 + 968))(v4, v27);
        v29 = v32 - *v19;
        v30 = v33 - v19[1];
        v31 = v34 - v19[2];
        off_10689714();
        sub_10219BB0(v26);
        sub_1021A300(v26, (int)&v32);
        v20 = sub_10219A30();
        v28[0] = (double)v20 * 0.000030518509 + (double)v20 * 0.000030518509 - 1.0;
        v21 = sub_10219A30();
        v28[1] = (double)v21 * 0.000030518509 + (double)v21 * 0.000030518509 - 1.0;
        v39 = sub_10219A30();
        v26[1] = 0;
        v26[0] = v28;
        v28[2] = (double)v39 * 0.000030518509 + (double)v39 * 0.000030518509 - 1.0;
        v27[0] = v32 - v29 * 4.0;
        v27[1] = v33 - v30 * 4.0;
        v27[2] = v34 - 4.0 * v31;
        ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *))(*off_1065C5EC)[37])(
          off_1065C5EC,
          v26,
          0.0,
          v27);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
      }
    }
  }
}
