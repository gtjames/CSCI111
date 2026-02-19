#pragma once
// declare dig namespace and header file contents
namespace dig
{
    double calculate_rate_per_worker(int n_workers, int h_hours, int x_cubic_meters);
    double calculate_time_needed(int m_workers, double rate_per_worker, int y_cubic_meters);
    const double EPSILON = 1e-1;
}