int *__thiscall sub_100F1020(void *this)
{
  int *v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ecx
  int *v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // ecx
  int *v9; // eax
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int *v13; // eax
  int v14; // esi
  int v15; // ecx
  int v16; // ecx
  int *v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // ecx
  int *v21; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // ecx
  int *v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // ecx
  int *result; // eax
  int v30; // esi
  int v31; // ecx
  int v32[3]; // [esp-4h] [ebp-10h] BYREF
  int v33; // [esp+8h] [ebp-4h] BYREF

  v32[0] = (int)this;
  sub_100F32D0(v32, "Simple Particle Singleton");
  v1 = sub_100F0F70(&v33, v32[0]);
  v2 = *v1;
  v3 = dword_10435CD8[0];
  if ( *v1 != dword_10435CD8[0] )
  {
    if ( v2 )
    {
      sub_100F2950(*v1);
      v3 = dword_10435CD8[0];
    }
    if ( v3 )
      sub_100F2FF0(v3);
    dword_10435CD8[0] = v2;
  }
  v4 = v33;
  if ( v33 )
    sub_100F2FF0(v33);
  v32[0] = v4;
  sub_100F32D0(v32, "Simple Particle Singleton [sky]");
  v5 = sub_100F0F70(&v33, v32[0]);
  v6 = *v5;
  v7 = dword_10435CDC;
  if ( *v5 != dword_10435CDC )
  {
    if ( v6 )
    {
      sub_100F2950(*v5);
      v7 = dword_10435CDC;
    }
    if ( v7 )
      sub_100F2FF0(v7);
    dword_10435CDC = v6;
  }
  v8 = v33;
  if ( v33 )
    sub_100F2FF0(v33);
  v32[0] = v8;
  sub_100F3330(v32, "Ember Particle Singleton");
  v9 = sub_100F0F70(&v33, v32[0]);
  v10 = *v9;
  v11 = dword_10435CE0[0];
  if ( *v9 != dword_10435CE0[0] )
  {
    if ( v10 )
    {
      sub_100F2950(*v9);
      v11 = dword_10435CE0[0];
    }
    if ( v11 )
      sub_100F2FF0(v11);
    dword_10435CE0[0] = v10;
  }
  v12 = v33;
  if ( v33 )
    sub_100F2FF0(v33);
  v32[0] = v12;
  sub_100F3330(v32, "Ember Particle Singleton [sky]");
  v13 = sub_100F0F70(&v33, v32[0]);
  v14 = *v13;
  v15 = dword_10435CE4;
  if ( *v13 != dword_10435CE4 )
  {
    if ( v14 )
    {
      sub_100F2950(*v13);
      v15 = dword_10435CE4;
    }
    if ( v15 )
      sub_100F2FF0(v15);
    dword_10435CE4 = v14;
  }
  v16 = v33;
  if ( v33 )
    sub_100F2FF0(v33);
  v32[0] = v16;
  sub_100F3390(v32, "Fire Smoke Particle Singleton");
  v17 = sub_100F0F70(&v33, v32[0]);
  v18 = *v17;
  v19 = dword_10435CE8[0];
  if ( *v17 != dword_10435CE8[0] )
  {
    if ( v18 )
    {
      sub_100F2950(*v17);
      v19 = dword_10435CE8[0];
    }
    if ( v19 )
      sub_100F2FF0(v19);
    dword_10435CE8[0] = v18;
  }
  v20 = v33;
  if ( v33 )
    sub_100F2FF0(v33);
  v32[0] = v20;
  sub_100F3390(v32, "Fire Smoke Particle Singleton [sky]");
  v21 = sub_100F0F70(&v33, v32[0]);
  v22 = *v21;
  v23 = dword_10435CEC;
  if ( *v21 != dword_10435CEC )
  {
    if ( v22 )
    {
      sub_100F2950(*v21);
      v23 = dword_10435CEC;
    }
    if ( v23 )
      sub_100F2FF0(v23);
    dword_10435CEC = v22;
  }
  v24 = v33;
  if ( v33 )
    sub_100F2FF0(v33);
  v32[0] = v24;
  sub_100F33F0(v32, "Fire Particle Singleton");
  v25 = sub_100F0F70(&v33, v32[0]);
  v26 = *v25;
  v27 = dword_10435CF0[0];
  if ( *v25 != dword_10435CF0[0] )
  {
    if ( v26 )
    {
      sub_100F2950(*v25);
      v27 = dword_10435CF0[0];
    }
    if ( v27 )
      sub_100F2FF0(v27);
    dword_10435CF0[0] = v26;
  }
  v28 = v33;
  if ( v33 )
    sub_100F2FF0(v33);
  v32[0] = v28;
  sub_100F33F0(v32, "Fire Particle Singleton [sky]");
  result = sub_100F0F70(&v33, v32[0]);
  v30 = *result;
  v31 = dword_10435CF4;
  if ( *result != dword_10435CF4 )
  {
    if ( v30 )
    {
      result = (int *)sub_100F2950(*result);
      v31 = dword_10435CF4;
    }
    if ( v31 )
      result = (int *)sub_100F2FF0(v31);
    dword_10435CF4 = v30;
  }
  if ( v33 )
    return (int *)sub_100F2FF0(v33);
  return result;
}
