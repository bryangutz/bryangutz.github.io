---
layout: page
title: Precision Control of a Van der Pol Oscillator — Experimental Implementation
description: Design, implementation, and experimental validation of a discrete PID controller for a nonlinear Van der Pol oscillator using DAQ and LabVIEW.
img: assets/img/Van_der_pols_equation_phase.png
importance: 2
category: projects
related_publications: true
pdf: assets/pdf/Paper_Digital_4.pdf
showcase: true
---

## Abstract

This project focuses on the experimental control of a nonlinear Van der Pol oscillator, a system known for its limit-cycle behavior and intrinsic instability. A discrete PID controller was designed based on a linearized model of the system and validated through both simulation and real-time experimental implementation. The work combines control theory, electronics, data acquisition, and software-based control using LabVIEW.

My primary contributions included the **assembly and validation of the electronic circuit modeling the oscillator**, as well as **collaborating in the design and implementation of the control strategy**, particularly in the experimental phase using a DAQ system.


## Technical Overview

The Van der Pol oscillator was modeled using an analog electronic circuit composed of operational amplifiers and nonlinear components. The system exhibits unstable oscillatory behavior in open loop, motivating the need for closed-loop control.

A PID controller was first designed in continuous time using classical control techniques (Routh–Hurwitz stability criterion), then discretized using a **redesign approach**:
- Integral action discretized using the **Tustin (bilinear) method**
- Derivative action discretized using **Backward Euler**
- Sampling period: 0.1 s

The controller was implemented and executed in **LabVIEW**, interfaced with the physical plant via a **NI USB-6003 DAQ**.

## My Contributions

- **Electronic circuit assembly** of the Van der Pol oscillator using operational amplifiers (LM741) and analog multipliers (AD633)
- Verification of circuit behavior using oscilloscope measurements and comparison with simulations
- Participation in the **design and tuning of the PID controller**, including stability analysis and performance objectives
- Support in the **experimental implementation** of the discrete controller using LabVIEW and DAQ hardware
- Analysis of experimental results, including steady-state error, overshoot, and settling time

## Results

The controlled system achieved:
- Near-zero steady-state error  
- Minimal overshoot (< 1%)  
- Stable behavior consistent with simulation results  

Experimental measurements closely matched MATLAB/Simulink and LabVIEW simulations, validating both the controller design and the physical implementation.

## Tools & Technologies

- **Control & Simulation:** MATLAB, Simulink  
- **Data Acquisition & Control:** LabVIEW, NI USB-6003 DAQ  
- **Electronics:** Analog circuit design, operational amplifiers, nonlinear analog components  
- **Control Methods:** PID control, system linearization, discrete-time control  


## Images

<div class="row">
  <div class="col-sm mt-3 mt-md-0">
    {% include figure.liquid path="assets/img/circuito_electronico.jpg" title="Figura 1" class="img-fluid rounded z-depth-1" %}
  </div>
  <div class="col-sm mt-3 mt-md-0">
    {% include figure.liquid path="assets/img/vdp5.jpg" title="Figura 2" class="img-fluid rounded z-depth-1" %}
  </div>
</div>

## Download PDF

<a class="btn btn-primary" href="{{ page.pdf | relative_url }}" target="_blank" rel="noopener noreferrer">
  <i class="fa-solid fa-file-pdf"></i> Download PDF (Paper 2)
</a>
